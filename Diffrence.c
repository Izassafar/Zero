#include<stdio.h>
void main()
{
	int a[20],b[20],i,n;
	printf("Enter the Number of Groups:");
	scanf("%d",&n);
	printf("\nNumber of Ninja's in Kabali and Opponent's group:");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]-a[i]);
	}
}
