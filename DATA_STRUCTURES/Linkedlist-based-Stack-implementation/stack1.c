#include <stdio.h>
#include <stdlib.h>
#define DATA_TYPE char


typedef struct node{
	DATA_TYPE element;
	struct node *next;
}Node;
Node *head;


Node* Append(Node *, DATA_TYPE);
int Lenght(Node *);
int GET_Element(Node *, int, DATA_TYPE *);
Node* Delete_First_Node(Node *);
int Delete_Node(Node *, int);
Node* Insert_First(Node *, DATA_TYPE);
int Insert_After(Node *, int, DATA_TYPE);

int main(){
	Node *ptr_head = NULL;
	int len, x;
	DATA_TYPE element;
	DATA_TYPE *ptr_element = &element;
	
	ptr_head = Append(ptr_head, 'S');
	Append(ptr_head, 'y');
	Append(ptr_head, 's');
	Append(ptr_head, 't');
	Append(ptr_head, 'e');
	Append(ptr_head, 'm');
	
	
	len = Lenght(ptr_head);
	for(x=1;x <= len; ++x){
		GET_Element(ptr_head, x, ptr_element);
		printf("\n %d --> %c", x, *ptr_element);
	} printf("\n -------------");
	//---------------------------------------------------------//
	ptr_head = Delete_First_Node(ptr_head);
	len = Lenght(ptr_head);
	for(x=1;x <= len; ++x){
		GET_Element(ptr_head, x, ptr_element);
		printf("\n %d --> %c", x, *ptr_element);
	} 
	printf("\n -------------");
	//----------------------------------------------------------------//
	Delete_Node(ptr_head, 5);
	len = Lenght(ptr_head);
	for(x=1;x <= len; ++x){
		GET_Element(ptr_head, x, ptr_element);
		printf("\n %d --> %c", x, *ptr_element);
	}
	printf("\n -------------");
	//----------------------------------------------------------------//
	ptr_head = Insert_First(ptr_head, 'A');
	len = Lenght(ptr_head);
	for(x=1;x <= len; ++x){
		GET_Element(ptr_head, x, ptr_element);
		printf("\n %d --> %c", x, *ptr_element);
	} 
	printf("\n -------------");
	//---------------------------------------------------------------//
	Insert_After(ptr_head, 2, 'M');
	len = Lenght(ptr_head);
	for(x=1;x <= len; ++x){
		GET_Element(ptr_head, x, ptr_element);
		printf("\n %d --> %c", x, *ptr_element);
	} 
	printf("\n -------------");
	//------------------------------------------------------------------//
	return 0;
}

Node* Append(Node *head, DATA_TYPE element){
	Node *new_node = NULL;
	new_node =(Node *)malloc(sizeof(Node));
	if(new_node == NULL){
		return NULL;
	}
	new_node->element = element;
	new_node->next = NULL;
	if(head !=NULL){
		Node *temp = head;
		while(temp->next !=NULL){
			temp = temp->next;
		}
		temp->next = new_node;
	}   return new_node;
}
int Lenght(Node *head){
	int Len=1;
	if(head ==NULL){
		return 0;
	}	Node *temp = head;
	while(temp->next != NULL){
		Len++;
		temp = temp->next;
	} return Len;
}

int GET_Element(Node *head, int node_number, DATA_TYPE *element){
	if(head ==NULL){
	return 0;}
		if((node_number > Lenght(head)) || (node_number < 1)){
			return -1;
		}
		Node *temp = head;
		int x =1;
	while(x < node_number){
		temp = temp->next;
		x++;
	}  *element = temp ->element;
	return 1;
}
Node* Delete_First_Node(Node *head){
	if(head ==NULL){
	return NULL;}
		
		if(Lenght(head) == 1){
			free(head);
			return NULL;
		} else{	
	Node *second_node;
	second_node = head->next;
		free(head);
		return second_node;
	}   
}
int Delete_Node(Node *head, int node_number){
	if(head == NULL){
		return 0;
	}  if((node_number > Lenght(head)) || (node_number < 2)){
		return -1;
	}
	Node *prev = head, *current;
	int x=1;
	while(x < node_number - 1){
		prev = prev->next;
		x++;
	}  
	current = prev->next;
	prev->next = current->next;
	free(current);
	return 1;
}


Node* Insert_First(Node *head, DATA_TYPE element){
	if(head == NULL){
		return  NULL;
	}
	Node *first_node;
   first_node = (Node *)malloc(sizeof(Node));
   if(first_node == NULL){
	   return head;
   }

	first_node->element = element;
	first_node->next = head;
	head = first_node;
	return head;	
}
int Insert_After(Node *head, int node_number, DATA_TYPE element){
	if(head == NULL){
		return 0;
	} if((node_number > Lenght(head)) || (node_number < 1)){
		return -1;
	}
	Node *prev = head, *current;
	int x=1;
	current = (Node *)malloc(sizeof(Node));
	if(current ==NULL){
		return 0;
	}
	while(x < node_number){
		prev = prev->next;
		x++;
	}  
	current->element = element;
	current->next = prev->next;
	prev->next = current;
	return 1;
}
   