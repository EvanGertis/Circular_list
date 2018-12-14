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
struct node *insertAfter(struct node *last, int data, int item);
struct node *deleteNode(struct node *last, int data);

int main()
{
	int choice, data, item;
	struct node *last = NULL;
	
	last = createList(last);
	
	while(1)
	{
		printf("1. Display list\n");
		printf("2. Insert in empty list\n");
		printf("3. Insert in the beginning \n");
		printf("4. Insert at the end \n");
		printf("5. Insert after a node \n");
		printf("6. Delete a node \n");
		printf("7. Quit \n");
		
		printf("Enter your choice : \n");
		scanf("%d", &choice);
		
		if(choice == 7){
			break;
		}
		
		switch(choice){
			case 1:
				//display(last);
				break;
			case 2:
				printf("Enter the data that you would like to insert: ");
				scanf("%d", &data);
				//last = insertInEmptyList(last, data);
			case 3:
				printf("Enter the data that you would like to insert in the beginning of the list: ");
				scanf("%d", &data);
				//last = insertInBeginning(last, data);
			case 4:
				printf("Enter the data that you would like to insert at the end of the list: ");
				scanf("%d", &data);
				//last = insertAtEnd(last, data);
			case 5:
				printf("Enter the node that you would like to insert data after: ");
				scanf("%d", &item);
				printf("Enter the data that you would like insert into this node : ");
				scanf("%d", &data);
				//last = insertAfter(last, data, item);
			case 6:
				printf("Enter the data of the node that you would like to delete : ");
				scanf("%d", &data);
				//last = deleteNode(last, data);			
		}
		
	}
	
   return 0;
}

struct node *createList(struct node *last){
	int i, n, data;
	printf("Enter the number of nodes : ");
	scanf("%d", &n);
	
	last = NULL;
	if(n== 0)
		return last;
	
	printf("Enter the element to be inserted : ");
	scanf("%d", &data);
	last = insertInEmptyList(last, data);
	
	for(i=2; i <=n; i++){
		printf("Enter the element to be inserted : ");
		scanf("%d", &data);
		last = insertAtEnd(last, data);
	}
	
	return last;
}/*End createList*/

void displayList(struct node *last){
	struct node *p;
	if(last == NULL)
	{
		printf("List is empty \n");
		return;
	}
	
	p = last->link;
	do
	{
		printf("%d", p->info);
		p = p->link;
	} while(p != last->link);
	printf("\n");
	
}/*End displayList*/

struct node *insertInEmptyList(struct node *last, int data){
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	
	last = temp;
	last->link = last;
	
	return last;
}/*End insertInEmptyList*/

struct node *insertInBeginning(struct node *last, int data){
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->info = data;
	
	temp->link = last->link;
	last->link = temp;
	return last;
}/*End insertInBeginning*/

struct node *insertAtEnd(struct node *last, int data){
	struct node *temp, *p;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->info = data;
	
	temp->link = last->link;
	last->link = temp;
	last = temp;
	
	return last;
}/*End insertAtEnd*/

struct node *insertAfter(struct node *last, int data, int x){
	struct node *temp, *p;
	p = last->link;
	
	do{
		if(p->info == x)
			break;
		p = p->link;
	}while(p != last->link);
	
	if(p== last->link && p->info !=x){
		printf("%d not present in the list \n", x);
	}
	else {
		temp = (struct node *)malloc(sizeof(struct node));
		temp->info = data;
		
		temp->link = p->link;
		p->link =temp;
		if(p == last){
			last = temp;
		}
	}
	
	return last;
}

struct node *deleteNode(struct node *last, int data){
	
	return last;
}/*End delete node*/
