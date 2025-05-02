#include <stdio.h>
#define MAX_SIZE 10
#define DATA_TYPE char

typedef struct{
	DATA_TYPE elements[MAX_SIZE];
	int top;
}Stack;

void Init(Stack *);
int IsFull(Stack *);
int IsEmpty(Stack *);
int Push(DATA_TYPE, Stack *);
int Pop(DATA_TYPE *, Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);

int main(){
	Stack stack;
	Stack *ptr_stack = &stack;
	DATA_TYPE element;
	DATA_TYPE  *ptr_element = &element;
	int x=0,temp=0;
	Init(ptr_stack);
  //----------------------------------------------------//
	Push('S', ptr_stack);
	Push('y', ptr_stack);
	Push('s', ptr_stack);
	Push('t', ptr_stack);
	Push('e', ptr_stack);
	Push('m', ptr_stack);
  //-------------------------------------------------------//
	if(IsFull(ptr_stack)){
		printf("\n stack is full");
	}
	else if(IsEmpty(ptr_stack)){
		printf("\n stack is empty");
	}
	else{
		printf("\n stack size is %d",StackSize(ptr_stack));
	}
	printf("\n -------------------------");
  //-------------------------------------------------------//
  temp = ptr_stack ->top;
	for(x=0;x <= temp ; ++x){
		Pop(ptr_element, ptr_stack);
		printf("\n Element : %c", *ptr_element);
		printf("\n size :%d", StackSize(ptr_stack));
		printf("\n -------------------------");
	}
	//------------------------------------------------------//
	return 0;
}
void Init(Stack *ptr_stack){
	ptr_stack->top = -1;	
}
int IsFull(Stack *ptr_stack){
	if(ptr_stack->top == MAX_SIZE - 1){
		return 1;
	} else
		return 0;
}
int IsEmpty(Stack *ptr_stack){
	if(ptr_stack->top == -1){
		return 1;
	} else
		return 0;
}
int Push(DATA_TYPE element, Stack *ptr_stack){
	if(ptr_stack->top == MAX_SIZE - 1){
		return 0;
	} else{
		ptr_stack->top++;
		ptr_stack->elements[ptr_stack->top]= element;
		return 1;
	}
		
}
int Pop(DATA_TYPE *ptr_element, Stack *ptr_stack){
	if(ptr_stack->top == -1){
		return 0;
	}else{
		*ptr_element=ptr_stack->elements[ptr_stack->top];
		ptr_stack->top--;
		return 1;
	}
}
int StackSize(Stack *ptr_stack){
	if(ptr_stack->top == -1){
		return 0;
	} else
		return (ptr_stack->top + 1);
}
void ClearStack(Stack *ptr_stack){
	ptr_stack->top = -1;
}



