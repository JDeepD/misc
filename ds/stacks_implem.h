#ifndef STACK_H
#define STACK_H

typedef struct STACK stack;

stack *createstack(int size);
void push(stack *stk, int num, int verbose);
void seek(stack *stk);
int pop(stack *stk);
void print_stack(stack *stk);

#endif
