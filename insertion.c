#include<stdio.h>
int main()
{
	int i,n,key,j;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of the array to be sorted:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	printf("sorted array are:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",arr[i]);
	}
}
		
