/********************prgram to find the entered number is power of 2 or not***************************/

#include<stdio.h>


void power_of_2(int num);


int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	power_of_2(num);
	return 0;
}

void power_of_2(int num)
{
	if(!(num & (num-1)))
		printf("Power of 2\n");
	else
		printf("Not a power of \n");
}
