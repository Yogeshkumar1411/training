/*
*Name: Yogesh
*Date: 2/1/24
*program: Recursion
*/
#include<stdio.h>
int fact(int num)
{
	if(num==1)//if this base condition is not there it will run untill the memory gets over.
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}

int main()
{
	int num = 5;
	printf("%d\n",fact(num));
}
