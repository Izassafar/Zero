#include<stdio.h>
void main()
{
	int n,k,i,g;
	printf("Enter the N:");
	scanf("%d",&n);
	printf("Enter K number:");
	scanf("%d",&k);
	for(i=1;i<=n&&i<=k;i++)
	{
		if(n%i==0&&k%i==0)
		{
			g=i;
		}
	}
	printf("%d",g);
}
