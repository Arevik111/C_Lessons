#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h> 

struct Node 
{ 
	int data; 
	struct Node* next; 
}; 

void push(struct Node** head_ref, int data) 
{ 
	struct Node* new_node =(struct Node*)malloc(sizeof(struct Node)); 
	new_node->data = data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

bool search(struct Node* head, int x)
{
	struct Node* current = head;
	while(current != NULL)
	{
		if(current->data == x)
			return true;
		current = current->next; 
	}
	return false;
}

int main() 
{ 
	struct Node* head = NULL; 
	int x = 14; 

	push(&head, 10); 
	push(&head, 30); 
	push(&head, 11); 
	push(&head, 21); 
	push(&head, 14); 

	search(head, x)? printf("Yes") : printf("No"); 
	return 0; 
} 
