/*
*Name: Yogesh
*Date: 4/1/24
*program: WCP to copy source to destination through the pointer
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *copy_string(void *dest, void *srce, int len)
{
	int i;
	char *des = (char *)dest;
	char *src = (char *)srce;
	des = (char *)malloc(len*sizeof(char));
	for(i=0;i<len;i++)
	{
		des[i] = src[i];
	}
	des[i] = '\0';
	printf("des = %s\n",des);
	return des;
}

int main()
{
	char str1[] = "Mirafra Technoligies";
	char *str2;
	str2 = copy_string(str2,str1,strlen(str1));
	printf("str2 = %s\n",str2);
	free(str2);
}
