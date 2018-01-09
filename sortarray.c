#include<stdio.h>
void main()
{
	int i,j,a[30],n,temp;
	printf("Enter the Size of Array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
	}
	printf("The Sorted Array is :%d",a[i]);
}
