#include<stdio.h>
int main()
{
	int i,n,temp,j;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of the array to be sorted:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
			
