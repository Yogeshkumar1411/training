/*
*Name: Yogesh
*Date: 4/1/24
*program: Write a C code which uses function pointer in it.
*/
#include<stdio.h>
int sum(int num_1,int num_2)
{
	return num_1+num_2;
}
int main()
{
	int (*ptr)(int,int);
	
	ptr = sum;
	
	printf("%d\n",ptr(4,5));
}
