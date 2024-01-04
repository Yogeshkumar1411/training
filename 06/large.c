
/*
*Name: Yogesh
*Date: 4/1/24
*program: Write a C program to find the largest element in an array
*/
#include<stdio.h>
void large(int *arr,int size)
{
	int i;
	int max = arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);
}

int main()
{
	int arr[] = {45,67,12,34,78,34,15,7,2};
	int size = sizeof(arr)/sizeof(int);
	large(arr,size);

}
