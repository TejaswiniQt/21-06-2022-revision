/***************C program to search an element in the array using bitwise operator****************/

#include<stdio.h>

int search(int *arr,int n,int num);

int main()
{
	int arr[50],n=0,i=0,val=0,num;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("Enter the number to be searched in array:");
	scanf("%d",&num);
	val=search(arr,n,num);
	if(val==1)
		printf("%d is found in the array\n",num);
	else
		printf("%d is not found in the array\n",num);
	return 0;
}


int search(int *arr,int n,int num)
{
	int res=0,i=0;
	for(i=0;i<n;i++)
	{
		if((arr[i] ^ num) == 0)
		{
			res = 1;
		}
	}
	if(res == 1)
		return 1;
	else
		return 0;
}
