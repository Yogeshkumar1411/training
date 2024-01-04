/*
*Name: Yogesh
*Date: 4/1/24
*program: Declare a structure with int,char[] and boolean data type and initialise the structure
		 in compile time and print the values.
*/
#include<stdio.h>
#include <stdbool.h>
struct var
{
	int numVar;
	char charVar[50];
	bool typeVar;
};
int main()
{
	struct var temp = {
		.numVar = 40,
		.typeVar = true,
		.charVar = "Mirafra"
	};
	
	printf("numvar = %d\ncharvar = %s\ntypevar = %d\n",temp.numVar,temp.charVar,temp.typeVar);
}
