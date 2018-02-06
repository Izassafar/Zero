#include<stdio.h>
void main()
{
	int n,i,a[20];
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]!=i)
		{
			printf("\nThe Changed Number is %d",i);
		}
	}
}
