#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* Next;
};
int main(){
	int length;
	int data,i;
	while(1){
	printf("Enter the list lenght: ");
	scanf("%d",&length);
	
	struct Node* head = NULL;
	struct Node* End = NULL;
	
	for(i=0;i<length;i++){
		printf("Enter %dth node value: ",i+1);
		scanf("%d",&data);	
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data = data;
       newNode->Next = NULL;
     if (head == NULL) {
   head = newNode;
    End = newNode;
  } else {
  End->Next = newNode;
  End = newNode;
 }
  } 	
   if (length % 2 == 0) {
  struct Node* current = head;
 for (int i = 1; i < length / 2; i++) {
current = current->Next;
  }
   printf("Middle elements 1: %d\n", current->data);
   printf("Middle elements 2: %d\n", current->Next->data);
  } else {
 struct Node* current = head;
 for (int i = 1; i <= length / 2; i++) {
 current = current->Next;
  }
  printf("Middle element: %d\n", current->data);
  }
  struct Node* current = head;
  struct Node* Next;
  while (current != NULL) {
  Next = current->Next;
   free(current);
   current = Next;
  }
		
		} return 0;
	}
