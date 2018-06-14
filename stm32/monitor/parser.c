/* parser.c:
 *
 *  Simple table driven parser for a command line interface.
 *
 *  Programmability is provided through a table interface.  The
 * parser strips leading whitespace from the command and then
 * isolates the first `word' in the string.  The word is then
 * matched to the table entries one at a time until a match is
 * found.  If no match is made, a message is printed and the
 * function returns.  If a match is made, the current position
 * in the string is saved and the function mentionned in the
 * the table is called.  The function can then call the provided
 * utility functions to access arguments, if any.  After the
 * function associated with the command returns, any remaining
 * characters in the input buffer are discarded and the parse
 * function returns to the caller.
 *
 *  The parser function mangles the input string, so don't
 * count on the contents after this function has been called.
 *
 *  All these functions return non zero values on failure.  A
 * zero return code indicates success.
 *
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#include "common.h"
extern parse_table _parsetable_start[];

#define BUFFER_LEN 80
char input[BUFFER_LEN];
char input_b[BUFFER_LEN];
static char *cmdArgs;  /* holds a pointer to everything following the
			* command */

/* Task to handle input */
static int crReceived = 0;
void TaskInput(void *data)
{
  char c;
  int rc;
  static unsigned int count = 0;
  static unsigned int saved = 0;
  static char *buf = input;
  static uint32_t printPrompt = 1;

  /* Do we have to print the prompt? */
  if(printPrompt) {
    printf("ARMON>");
    printPrompt = 0;
  }

  /* Get the next character */
  rc = TerminalRead(INDEX_CONSOLE,(uint8_t*)&c,1);
  if(rc) goto ProcessCharacter;

  /* No characters were found, just return */
  return;
  
 ProcessCharacter:
  /* We have a character to process */
  //printf("Got:'%c' %d\n",c,c);
  /* Check for simple line control characters */
  if(((c == 010) || (c == 0x7f)) && count) {
    /* User pressed backspace */
    printf("\010 \010"); /* Obliterate character */
    buf--;     /* Then remove it from the buffer */
    count--;   /* Then keep track of how many are left */
  } else if(c == '!') { /* '!' repeats the last command */
    if(saved) {  /* But only if we have something saved */
      strcpy(input,input_b);  /* Restore the command */
      printf("%s",input);
      count = strlen(input);
      buf = input+count;
      goto parseme;
    }
  } else if(isprint((unsigned int)c)) {
    /* We are only going to save printable characters */
    if(count >= sizeof(input)) {
      /* We are out of space */
      printf("\x07"); /* Beep */
      return;
    } else {
      *buf++ = c;
      count++;
      /* Echo it back to the user */
      printf("%c",c);
    }
  } else if(c == '\r' || (c == '\n' && crReceived == 0)) {
    /* Windows = \r\n
     * *nix = \n
     * Mac = \r
     * If we receive a \r, assume enter pressed (Mac or Windows) and note it.
     * If we receive a \n, either *nix (crReceived == 0, send) or Windows (crReceived == 1, ignore)
     */

    /* NULL Terminate anything we have received */
    *buf = '\0';
    /* save current buffer in case we want to re do the command */
    strcpy(input_b,input);
    saved = 1;
  parseme:
    /* The user pressed enter, parse the command */
    printf("\n");
    parse(input, sizeof(input), _parsetable_start);
    printPrompt = 1;
    
    buf = input;
    count = 0;
  }
  if (c == '\r') {
    crReceived = 1;
  } else {
    crReceived = 0;
  }
}

ADD_TASK(TaskInput,NULL, NULL,"Parser handling task")


/* Parse a command contained in a NUL terminated string, against the builtin
 * commands
 */
ParserReturnVal_t ParseCmd(char *buf)
{
  char *p = buf;
  if(buf==NULL) {
    printf("NULL buffer pointer passed to ParseCmd()\n");
    return CmdReturnParserFailure;
  }
  // Loop in case multiple commands are part of the same buffer
  while (p) {
    ParserReturnVal_t result;
    char *next = strchr(p, '\r');
    size_t plen;
    if (next) {
      ++next;
      if (*next == '\n') ++next;
      plen = next - p;
    } else {
      plen = strlen(p);
    }
    result = parse(p, plen, _parsetable_start);
    if (result != CmdReturnOk) {
      return result;
    }
    p = next;
  }
  return CmdReturnOk;
}

#define SEPS " \t\n\v\f\r"

/* Parse the buffer and call commands */ 
ParserReturnVal_t parse(char *buf, int len, const parse_table *table)
{
  char *p;
  int i,arg;
  const parse_table *t;
  
  /* Check for silly things */
  if(buf == NULL) {
    printf("NULL buf pointer passed to %s()\n",__FUNCTION__);
    return CmdReturnParserFailure;
  }

  if(len==0) {
    printf("len == 0 in %s\n",__FUNCTION__);
    return CmdReturnParserFailure;
  }

  if(table == NULL) {
    printf("NULL table pointer passed to %s()\n",__FUNCTION__);
    return CmdReturnParserFailure;
  }


  /* Find the first word, by skiping over whitespace */
  i = len;
  while((i--) && (*buf != 0) && (isspace((uint32_t)*buf))) buf++;
  if((i==0) || (*buf==0)) {
#if 0
    printf("End of buffer reached while discarding whitespace in %s()\n",
       __FUNCTION__);
#endif
    return CmdReturnParserFailure;
  }
	
  p = strtok(buf,SEPS);
  if(p==NULL) {
    /* No token found */
    printf("Unable to find a command in the buffer in %s()\n",__FUNCTION__);
    return CmdReturnParserFailure;
  }

  arg = CMD_INTERACTIVE;  /* Default to calling action part of function */
  /* Check to see if the user is asking for help */
  if(strcasecmp(p,"help") == 0) {
    /* Check to see if the user is asking for more help */
    p = strtok(NULL,SEPS);
    if(p == NULL) {
      /* If we don't get any more tokens the user is asking for short
       * help */
      /* Loop over the commands defined and print help for them */
      for(t=table; t->cmdname!=NULL; t++) {
	if(t->help != NULL) {
	  printf("%12s -- %s\n",t->cmdname,t->help);
	} else {
	  t->func(CMD_SHORT_HELP);  /* Call the function for short help */
	}
      }
      return 0;
    } else {
      /* The user has asked for long help, call the function
       * for help */
      arg = CMD_LONG_HELP;
    }
  }

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
  
  /* Now search for token in the table */
  for(t=table; t->cmdname!=NULL; t++) {
    if(strcasecmp(p,t->cmdname) == 0) {
      /* Got a match, call the function */
      if(arg == CMD_LONG_HELP) {	
	printf("%s:\n",t->cmdname);
      }
      return t->func(arg);
    }
  }

  printf("Command '%s' not found. Type 'help' for online help\n",p);
  return CmdReturnNotFound;
}

/* Fetch an integer argument */
int fetch_int32_arg(int32_t *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = strtol(p,NULL,0);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;

  return 0;
}     

/* Fetch an integer argument */
int fetch_uint32_arg(uint32_t *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = (uint32_t)strtoul(p,NULL,0);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
  return 0;
}

/* Fetch an integer argument */
int fetch_int16_arg(int16_t *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = (int16_t)strtol(p,NULL,0);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
return 0;
}     

/* Fetch an integer argument */
int fetch_uint16_arg(uint16_t *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = (uint16_t)strtoul(p,NULL,0);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
return 0;
}     

/* Fetch an double argument */
int fetch_double_arg(double *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = strtod(p,NULL);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
  return 0;
}

/* Fetch an float argument */
int fetch_float_arg(float *dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = strtof(p,NULL);

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
  return 0;
}


/* Fetch a string argument */
int fetch_string_arg(char **dest)
{
  char *p;
  p = strtok(NULL,SEPS);
  if(p == NULL) {
    /* If we don't get any more tokens it's not an error, just the EOL */
    return -1;
  }
  
  *dest = p;

  /* Update the pointer to the rest of the command, strtok adds a
   * trailing NUL after the token, so the rest of the buffer starts at
   * p plus ththe length of the string, plus one more. */
  cmdArgs = p + strlen(p) + 1;
  return 0;
}

/* Fetch the rest of the command */
int fetch_cmd_args(char **dest)
{
  *dest = cmdArgs;
  return 0;
}

/* Generate mapping from enum to strings for parser return codes */
static const char *ParserCodes[] = {
#define DEF_ENUM(name)  #name,
#include "command_codes.inc"
};

const char *ParserReturnValToString(ParserReturnVal_t val)
{
  return ParserCodes[val];
}
