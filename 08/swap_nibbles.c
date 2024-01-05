/*
*Name: Yogesh
*Date: 4/1/24
*program: WRP to swap nibbles in 1 byte number.
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	num = (num&0xf0)>>4|(num&0x0f)<<4;
	printf("%d\n",num);
	
	
	
}

//128 64 32 16 8 4 2 1
//1    0  0  0 0 0 0 1
