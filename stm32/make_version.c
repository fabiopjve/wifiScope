/* Make a file that contains some interesting tidbits about compile time */
#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(int argc, char **argv)
{
  time_t theTime;

  theTime = time(NULL);
  printf("#include <stdint.h>\n"
	 "#include <stdio.h>\n"
	 "#include <time.h>\n"
	 "#include \"common.h\"\n"
	 "const time_t VersionBuildDate = %ld;\n",theTime);
  
  printf("const char VersionBuildUser[] = \"%s\";\n",
	 getlogin());

  printf("\n"
	 "void VersionPrint(void)\n"
	 "{\n"
	 "   printf(\"Built:%%sBy:%%s\\n\",ctime(&VersionBuildDate),VersionBuildUser);\n"
	 "}\n"
	 "\n"
	 "ParserReturnVal_t CmdVersion(int mode)\n"
	 "{\n"
	 "   if(mode != CMD_INTERACTIVE) return CmdReturnOk;\n"
	 "\n"
	 "   VersionPrint();\n"
	 "   return CmdReturnOk;\n"
	 "}\n"
	 "ADD_CMD(\"version\",CmdVersion,\"                Print version info\")\n");
  return 0;
}
