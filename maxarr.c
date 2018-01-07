#include<stdio.h>
void main()
{
	int a[30],n,i,max;
	printf("Enter the Size of array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
printf("The maximum element is : %d",max);
}
