/*
*Name: Yogesh
*Date: 4/1/24
*program: WRP to return, number of words either start or end with vowels in a string.
*/
#include<stdio.h>
#include<string.h>
words_start_end_vowel(char *str,int len)
{
	int i,count=0,flag=0;
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			flag=0;
		}
		if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
		{
			if(i==0)
			{
				count++;
				flag = 1;
			}
			if(str[i-1]==' ')
			{
				count++;
				flag = 1;
			}
			if(str[i+1]==' '||str[i+1]=='\0')
			{
				if(flag==0)
				{
					count++;
				}
				if(flag==1)
				{
					flag=0;
				}
				
			}
		}
		
	}
	return count;
}
void check_single_word_count()
{
	char str[]="mouse";
	int res = words_start_end_vowel(str,strlen(str));
	if(res==1)
	{
		printf("check_single_word_count is fine\n");
	}
	else
	{
		printf("check_single_word_count is error\n");
	}
}
void check_start_end_vowel_contin()
{
	char str[]="eye open";
	int res = words_start_end_vowel(str,strlen(str));
	if(res==2)
	{
		printf("check_start_end_vowel_contin is fine\n");
	}
	else
	{
		printf("check_start_end_vowel_contin is error\n");
	}
}
void check_start_end_vowel()
{
	char str[] = "eye";
	int res = words_start_end_vowel(str,strlen(str));
	if(res==1)
	{
		printf("check_start_end_vowel is fine\n");
	}
	else
	{
		printf("check_start_end_vowel is error\n");
	}
}
int main()
{
	char str[] = "number of words either start or end with vowels in a string";
	//check_single_word_count();
	//check_start_end_vowel();
	check_start_end_vowel_contin();
	//printf("%d\n",words_start_end_vowel(str,strlen(str)));
}
