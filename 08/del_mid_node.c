 /*
*Name: Yogesh
*Date: 4/1/24
*program: Remove the middle node from the linked list
*/
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
struct node *head = NULL;
void add_node(int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		struct node *p = head;
		while(p->link)
		{
			p=p->link;
		}
		p->link = ptr;
	}
}
void print()
{
	struct node *ptr = head;
	while(ptr)
	{
		printf("data = %d\n",ptr->data);
		ptr=ptr->link;
	}
}
int count_node()
{
	struct node *ptr = head;
	int count=0;
	while(ptr)
	{
		ptr=ptr->link;
		count++;
	}
	printf("count = %d\n",count);
	return count;
}
void del_mid_node()
{
	struct node *ptr = head;
	int mid = (count_node())/2;
	printf("mid %d\n",mid);
	while(mid>1)
	{
		ptr=ptr->link;
		mid--;
	}
	ptr->link = ptr->link->link;
}
int main()
{
	add_node(5);
	add_node(15);
	add_node(25);
	add_node(35);
	add_node(45);
	print();
	del_mid_node();
	printf("*************\n");
	print();
}
