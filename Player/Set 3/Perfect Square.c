#include<stdio.h>
void main()
{
	int i,j,l,r,c=0;
	scanf("%d%d",&l,&r);
	for(i=l;i<r;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i==j*j)
		{
			c++;
        }
        }
	}
		printf("%d",c);
}
