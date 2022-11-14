#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
};
struct node*next;
struct node*head=NULL;
void create(struct node*);
void display(struct node*);
int main()
{
	int ch;
	while(1)
	{
		printf("press 1. create 2. display 3. exit\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: create(head);
			break;
			case 2: display(head);
			break;
			case 3: exit(1);
			break;
			default: printf("wrong choice");
			break;
		}
		
	}
	return 0;
}
void create(struct node*ptr)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("enter info");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display(struct node*ptr)
{
	if(head==NULL)
	{
		printf("empty linked list\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->info);
			ptr=ptr->next;
		}
	}
}
