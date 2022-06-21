/******************************To clear nth bit***********************************/

#include<stdio.h>

void clear_bit(int num,int pos);

int main()
{
	int num,pos;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter the postion:");
	scanf("%d",&pos);
	clear_bit(num,pos);
	return 0;
}


void clear_bit(int num,int pos)
{
	num &= ~(1 << pos-1);
	printf("%d\n",num);
}
