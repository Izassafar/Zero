#include<stdio.h>
void main()
{
	int i,j,l,r,s,count=0;
	printf("Enter the Range:");
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++)
	{
		s=i*i;
		for(j=l;j<=r;j++)
		{
			if(s==j)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
