#include <stdio.h> 
#include <stdlib.h> 

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node** ref_head, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*ref_head);
	(*ref_head) = new_node;
}
/* Given a node prev_node, insert a new node after the given 
prev_node */
void insertAfter(struct Node* prev_node, int new_data)
{
	if(prev_node == NULL)
	{
		printf("the given previus node cannot be NULL");
		return;
	}
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
} 

void append(struct Node** ref_head, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node *last = *ref_head;
	new_node->data = new_data;
	new_node->next = NULL;
	if(*ref_head == NULL)
	{
		*ref_head = new_node;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
		last->next = new_node;
		return;
	}
}

// This function prints contents of linked list starting from head 
void printList(struct Node *node) 
{ 
	while (node != NULL) 
	{ 
		printf(" %d ", node->data); 
		node = node->next; 
	} 
} 


int main() 
{ 
	struct Node* head = NULL; 
	push(&head, 6);
	push(&head, 7); 
	push(&head, 1); 
	append(&head, 4);
	insertAfter(head->next, 8); 
	printf("\n Created Linked list is: "); 
	printList(head); 
	return 0; 
} 
