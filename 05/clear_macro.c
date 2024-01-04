/*
*Name: Yogesh
*Date: 4/1/24
*program: macro function to clear bit.
*/
#include<stdio.h>
#define CLEAR(num,pos) num&(~(1<<pos))

int main()
{
	int num,pos;
	scanf("%d %d",&num,&pos);
	printf("%d\n",CLEAR(num,pos));
	
}
