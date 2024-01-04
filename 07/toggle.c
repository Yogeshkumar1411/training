
/*
*Name: Yogesh
*Date: 4/1/24
*program: Write a c program to toggle 7th bit of a number
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d\n",num^(1<<7));
}
