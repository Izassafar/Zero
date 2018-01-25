#include<stdio.h>
void main()
{
	int l,i,m,n,count=0;
	scanf("%d",&l);
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(l==i)
		{
			count++;
		}
	}
	if(count==1)
	 printf("yes");
	else
	 printf("No");
}
