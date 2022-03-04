#include "stacks_implem.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	stack *stck = createstack(10);
	for (int i = 0; i < 10; i++) {
		push(stck, i, 0);
	}
	print_stack(stck);
	pop(stck);
	print_stack(stck);

	for (int i = 0; i < 4; i++) {
		pop(stck);
	}
	print_stack(stck);
}


struct STACK{
	int end; //stores the index of the last elem. -1 if empty
	int size; // stores the size of stack
	int *arr; // the array where the stack elements are stored.
};


//create a stack of size : size
//and return a stack pointer
stack *createstack(int size){
	stack *stk = (stack*)(malloc(sizeof(stack)))	;
	stk->end = -1;
	stk->size = size;
	stk->arr = (int*)(calloc(size, sizeof(int)));
	return stk;
}

//give a stack pointer and a num to push
void push(stack *stk, int num, int verbose){
	int index = stk->end;
	(stk->arr)[index+1] = num;
	(stk->end)++;
	if (verbose == 1) {
		printf("Pushed: %d ", num);
		print_stack(stk);
	}
}

// give a stack pointer to get the last elem
void seek(stack *stk){
	int idx = stk->end;
	if (idx == -1) {
		return;
	}
	printf("%d\n", stk->arr[idx]);
}

//returns the past element and removes it from stack
int pop(stack *stk){
	printf("Popped: %d\n", stk->arr[stk->end]);
	int popped = stk->arr[stk->end];
	stk->end--;
	return popped;
}

void print_stack(stack *stk){
	printf("Stack: ");
	for (int i = 0; i <= stk->end; i++) {
		printf("%d ", stk->arr[i]);
	}
	printf("\n");
}

