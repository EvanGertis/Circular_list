#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *link;
	int info;
};

struct node *createList(struct node *last);
void displayList(struct node *last);
struct node *insertInEmptyList(struct node *last, int data);
struct node *insertInBeginning(struct node *last, int data);
struct node *insertAtEnd(struct node *last, int data);
struct node *deleteNode(struct node *last, int data);

int main()
{
	int choice, data, item;
	struct node *last = NULL;
   printf("Hello, World!");
   return 0;
}

struct node *createList(struct node *last){
	
	return last;
}/*End createList*/

void displayList(struct node *last){
	
}/*End displayList*/

struct node *insertInEmptyList(struct node *last, int data){
	
	return last;
}/*End insertInEmptyList*/

struct node *insertInBeginning(struct node *last, int data){
		
	return last;
}/*End insertInBeginning*/

struct node *insertAtEnd(struct node *last, int data){
	
	return last;
}/*End insertAtEnd*/

struct node *deleteNode(struct node *last, int data){
	
	return last;
}/*End delete node*/
