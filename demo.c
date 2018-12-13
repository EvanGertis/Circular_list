#include <stdio.h>
#include <stdlib.h>

struct node *{
	struct node *link;
	int info;
}

struct node *creatList(struct node *last);
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