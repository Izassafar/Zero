#include<stdio.h>
void main()
{
	float i,l,n;
	int s,m;
	scanf("%f",&n);
	m=n;
	l=n-m;
	if(l>=0.5)
	{
		i=1-l;
		s=i+n;
	}
	else
	{
		s=n-l;
	}
	printf("%d",s);
}
