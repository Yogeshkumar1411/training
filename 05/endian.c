/*
*Name: Yogesh
*Date: 4/1/24
*program: WCP to check our system is big or little enidian?
*/
#include<stdio.h>
int main()
{
	unsigned int num = 0x12345678;
	char *ptr = (char *)&num;
	if(*ptr==0x12)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
}
