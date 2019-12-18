//Link
#include<stdio.h>
#include<string.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL,*temp;
char str[100];
void insert(char c,struct node* new)
{
	if(start==NULL)
	{
		new->data=c;
		new->next=NULL;
	}
	else
	{
		new->data=c;
		new->next=start;
	}
	start=new;
}
void main()
{
	int i;
	printf("Enter the String: ");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	{
	   struct node *new = (struct node*)malloc(sizeof(struct node));
		insert(str[i],new);
	}
	temp=start;
	while(temp->next!=NULL)
	{
		printf("%c",temp->data);
		temp=temp->next;
	}
	printf("%c",temp->data);
}
