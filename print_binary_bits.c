/**********************c Program to print the binary bits of the number**************************/

#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if((num >> i) & 1)
			printf("%d",1);
		else
			printf("%d",0);
	}
	printf("\n");
	return 0;
}

