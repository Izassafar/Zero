#include<stdio.h>
void main()
{
	int i,n,a[30];
	printf("Enter the Size of Array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("a[%d] is %d\n",i,a[i]);
    }
}
