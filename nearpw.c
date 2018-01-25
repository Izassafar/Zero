#include<stdio.h>
void main()
{
	int n,i,count=0,m=1,p=2;
	scanf("%d",&n);
	while(n!=1)
	{
		n=n/2;
		count++;
	}
	for(i=0;i<count+1;i++)
	{
		m=m*p;
	}
	printf("%d",m);
}
