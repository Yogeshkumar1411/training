/*
*Name: Yogesh
*Date: 4/1/24
*program: How to store 32 bit data into a 16 bit MCU
*/
#include<stdio.h>
#include<stdint.h>
int main()
{
	uint16_t m_data;
	uint16_t l_data;
	
	uint32_t data = 98319;
	m_data = data>>16;
	l_data = data;
	printf("%d %d\n",m_data,l_data);
}

//65536 32768 16384 8192 4096 2048 1024 512 256 128 64 32 16 8 4 2 1
//1      1      0    0    0    0    0    0   0   0   0  0  0 1 1 1 1
