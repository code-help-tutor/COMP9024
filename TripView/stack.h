WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
// Stack ADT header file ... COMP9024 23T2
#include <stdbool.h>

typedef struct StackRep *stack;

stack newStack();             // set up empty stack
void  dropStack(stack);       // remove unwanted stack
bool  StackIsEmpty(stack);    // check whether stack is empty
void  StackPush(stack, int);  // insert an int on top of stack
int   StackPop(stack);        // remove int from top of stack
