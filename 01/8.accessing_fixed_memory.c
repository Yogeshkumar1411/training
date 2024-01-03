/*
*Name: Yogesh
*Date: 2/1/24
*program: How can we read or write a value to fixed memory location (write a program)
-> Fixed memory location = constant pointers
-> the value can change where the pointer is pointing, but the address cannot change to point somewhere from
initialized pointer
*/
#if 0
#include<stdio.h>

int main()
{
	int value_1 = 10;
	int value_2 = 20;
	int *const ptr = &value_1;
	*ptr = value_2;
	*ptr = 30;
	//ptr = &value_2;//will give compiation error.
	printf("%d\n",*ptr);
	
}
#endif
#if 1
#include<stdio.h>
#include<stdint.h>
#define RW_FLAG 0x1FFF7800//fixed address
int main()
{
	volatile uint32_t *flagAddress = NULL;
	uint32_t readData = 0;
	flagAddress = (volatile uint32_t *)RW_FLAG;
	*flagAddress = 20;
	readData = *flagAddress;
	printf("read_data = %d\n",readData);
}
#endif
