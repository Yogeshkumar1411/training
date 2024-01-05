/*
*Name: Yogesh
*Date: 4/1/24
*program: WRP to find number of bits in a number
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int count = 0;
	while(num)
	{
		count++;
		num = num>>1;
	}
	printf("number of bits required to represent the number = %d\n",count);
}
