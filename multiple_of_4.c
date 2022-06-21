/****************Multiple of 4 or not*********************************/
#include<stdio.h>


int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if((num & 3) == 0)
	{
		printf("%d is multiple of 4\n",num);
	}
	else
	{
		printf("%d is not multiple of 4\n",num);
	}
	return 0;
}
