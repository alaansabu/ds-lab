#include<stdio.h>
int main()
{
	int i,n,a[50],first,key,last,mid,pos;
	printf("enter the element:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements in sorted order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter the elements to be searched");
			scanf("%d",&key);
			first=0;
			last=n-1;
			pos=-1;
			while(first<=last){
			mid=(first+last)/2;
if(a[mid]==key)
{
pos=mid;
printf("the element not found at pos %d",pos+1);
break;
}
else  if(a[mid]>key)
{
last=mid-1;
}	
else{
first=mid+1;
}	
if(pos==-1){
printf("value not prensent");

