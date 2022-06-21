/******************************C program to Swap two bits******************************/

#include<stdio.h>

void swap_bits(int num,int p1,int p2);


int main()
{
	int num, p1, p2;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter two  the bit positions to be swapped:");
	scanf("%d%d",&p1,&p2);
	swap_bits(num,p1,p2);
	return 0;
}

void swap_bits(int num,int p1,int p2)
{
	int b1,b2,res;
	b1 = (num >> p1) & 1;
	b2 = (num >> p2) & 1;
	res = num;
	if(b1 != b2)
	{
		res = num ^ ((1 << p1) | (1 << p2));
	}
	printf("num: %d\n",num);
	printf("Swap bits: (%d,%d)\n",p1,p2);
	printf("After swapping num: %d\n", res);
}

