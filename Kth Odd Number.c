#include<stdio.h>
void main()
{
	int n,k,i,a[30],count=0;
	printf("Enter the N and K elements:");
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==1)
		{
			count++;
			if(count==k)
			{
				printf("%d",a[i]);
			}
		}
	}
	
}
