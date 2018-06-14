@@ mycode.s :
@@ Test code for STM32 and linking assembly to C
 

    .code   16
    .text                   @@ - Code section (text -> ROM)

@@ <function block>
    .align  2               @@ - 2^n alignment (n=2)
    .syntax unified
    .global mytest          @@ - Symbol name for function
    .code   16              @@ - 16bit THUMB code (BOTH are required!)
    .thumb_func             @@ /
    .type   mytest, %function   @@ - symbol type (not req)
@@ Declaration : int mytest(int x)
@@ Uses r0 for param 0
@@   r0: x
mytest:
    push {lr}
    push {r1}
    push {r0-r7}
    bl   USR_LED_Toggle           @@ call BSP function
    pop  {r0-r7}
    ldr  r1, =myTickCount
    ldr  r0, [r1]
    pop  {r1} 
    pop  {pc}
    .size   mytest, .-mytest    @@ - symbol size (not req)

@@ <function block>
    .align  2               @@ - 2^n alignment (n=2)
    .syntax unified
    .global my_Tick          @@ - Symbol name for function
    .code   16              @@ - 16bit THUMB code (BOTH are required!)
    .thumb_func             @@ /
    .type   my_Tick, %function   @@ - symbol type (not req)
@@ Declaration : void my_Tick( void )
@@ Uses nothing
my_Tick:
    push {lr}
    push {r0-r1}

    ldr  r1, =myTickCount
    ldr  r0, [r1]
    add  r0, r0, #1
    str  r0, [r1]
    pop {r0-r1}
    pop  {pc}
    .size   my_Tick, .-my_Tick    @@ - symbol size (not req)

@@ <function block>
    .align  2               @@ - 2^n alignment (n=2)
    .syntax unified
    .global my_Loop          @@ - Symbol name for function
    .code   16              @@ - 16bit THUMB code (BOTH are required!)
    .thumb_func             @@ /
    .type   my_Loop, %function   @@ - symbol type (not req)
@@ Declaration : void my_Loop( void )
@@ Uses nothing
my_Loop:
    push {lr}
    pop  {pc}
    .size   my_Loop, .-my_Loop    @@ - symbol size (not req)

@@ <function block>
    .align  2               @@ - 2^n alignment (n=2)
    .syntax unified
    .global my_Init          @@ - Symbol name for function
    .code   16              @@ - 16bit THUMB code (BOTH are required!)
    .thumb_func             @@ /
    .type   my_Init, %function   @@ - symbol type (not req)
@@ Declaration : void my_Init( void )
@@ Uses nothing
my_Init:
    push {lr}
    pop  {pc}
    .size   my_Init, .-my_Init    @@ - symbol size (not req)

@@ start of data area where globals are stored
    .data
    .global myTickCount
myTickCount:
    .word  0         /* A 32-bit variable named myTickCount */


    .end

