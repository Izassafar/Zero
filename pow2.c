#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n%2;
		if(n==n/2)
		{
			n=n/2;
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
}
