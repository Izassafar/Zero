#include<stdio.h>
void main()
{
	int l,r,i,t,n;
	printf("Enter the L:");
	scanf("%d",&l);
	printf("Enter the R:");
	scanf("%d",&r);
	for(i=1;i<=l&&i<=r;i++)
	{
		if(l%i==0&&r%i==0)
		{
			n=i;
		}
	}
	t=(l*r)/n;
	printf("%d",t);
}
