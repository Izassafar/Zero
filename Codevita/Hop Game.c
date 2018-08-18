#include<stdio.h>
int max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int ms(int sv[],int n,int ci,int mf,int ds)
{
	if(ci>=n)
	{
		return 0;
	}
	int s=0;
	if(ci!=-1)
	{
		s=mf*sv[ci];
	}
	int v1=ms(sv,n,ci+1,1,ds);
	int v2=ms(sv,n,ci+2,2,ds);
	int v3=0;
	if(ds==0)
	{
		v3=ms(sv,n,ci+3,3,1);
	}
	int tms=max(v1,v2,v3);
	int ts=s+tms;
	return ts;
}
int main()
{
	int n,sv[50],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d,",&sv[i]);
	}
	printf("%d",ms(sv,n,-1,1,0));
}
