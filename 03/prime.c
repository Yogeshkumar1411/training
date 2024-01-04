/*
*Name: Yogesh
*Date: 4/1/24
*program: write function find the given number is prime or not.
*/
#include<stdio.h>
int check_prime(int num)
{
	int i,flag = 0;
	if(num==1)
	{
		return 0;
	}
	for(i=2;i<num;i++)
	{
		if((num%i)==0)
		{
			flag++;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	while(1)
	{
		scanf("%d",&num);
		if(check_prime(num))
		{
			printf("Prime number\n");
		}
		else
		{
			printf("Not a prime number\n");
		}
	}
}
