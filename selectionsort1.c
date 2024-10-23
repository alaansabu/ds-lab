#include<stdio.h>
int main()
{
	int i,n,small,temp,k,j;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the un sortered elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(k=0;k<(n-1);k++)
	{
		small=k;
		for(j=k+1;j<n;j++)
		{
			if(arr[j]<arr[small])
			{
				small=j;
			}
		}
		temp=arr[small];
		arr[small]=arr[k];
		arr[k]=temp;
		
}
printf("\nsorted elements are:");
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
}
