/*
*Name: Yogesh
*Date: 2/1/24
*program: Toggle and clear of the given number
*/
#include<stdio.h>
int main()
{
	int num,pos;
	printf("Enter the number and the postion need to be toggled and clear\n");
	scanf("%d %d",&num,&pos);
	num = num ^ (1<<pos);
	printf("After toggle %d\n",num);
	if((num>>pos)&1)
	{
		num = num&(~(1<<pos));
	}
	printf("After toggle %d\n",num);
}

/*
32 16 8 4 2 1
1  1  0 0 0 0

1  1  0 1 0 0
1  1  0 0 0 0
*/
