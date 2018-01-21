#include<stdio.h>
void main()
{
	int n,s,rev=0,mod;
	scanf("%d",&n);
	while(n!=0)
	{
		mod=n%10;
		n=n/10;
		rev=(rev*10)+n;
	}
	while(rev!=0)
	{
		s=rev%10;
		printf("%d\t",s);
		rev=rev/10;
	}
}
