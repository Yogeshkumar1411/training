/*
*Name: Yogesh
*Date: 4/1/24
*program: Write a C code to find the number of set bits and clear bits in a number.
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int set=0,clear=0;
	while(num)
	{
		if(num&1)
		{
			set++;
		}
		else
		{
			clear++;
		}
		num=num>>1;
	}
	printf("Set = %d\nClear = %d\n",set,clear);
}
