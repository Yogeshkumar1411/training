/*
*Name: Yogesh
*Date: 4/1/24
*program: anagram of string
*/
#include<stdio.h>
#include<string.h>
int check_anagram(char *str1,char *str2, int len)
{
	int i,j,flag=0;
	for(i=0;i<len;i++)
	{
		flag=0;
		for(j=0;j<len;j++)
		{
			if(str1[i]==str2[j])
			{
				flag++;
			}
		}
		if(flag==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str1[20],str2[20];
	scanf(" %[^\n]s",str1);
	scanf(" %[^\n]s",str2);
	if(strlen(str1)==strlen(str2))
	{
		if(check_anagram(str1,str2,strlen(str1)))
		{
			printf("Anagram\n");
		}
		else
		{
			printf("Not an anagram\n");
		}
	}
	else
	{
		printf("Not an anagram\n");
	}
	
}
