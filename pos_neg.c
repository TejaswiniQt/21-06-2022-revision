/********************C program to find the number is positive or negative using bitwise operator******************/

#include<stdio.h>

int main()
{
	int num,res;
	printf("Enter the number:");
	scanf("%d",&num);
	res = 1 + (num >> 31) - (-num >>31);
	if(res == 0)
		printf("%d is a Negative number\n",num);
	else if(res == 2)
		printf("%d is a Positive number\n",num);
	else
		printf("It is zero\n");
	return 0;
}

