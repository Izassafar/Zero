#include<stdio.h>
void main()
{
	int n,r,d,s;
	scanf("%d",&n);
	r=n%10;
	d=10-r;
	s=n+d;
	printf("%d",s);
}
