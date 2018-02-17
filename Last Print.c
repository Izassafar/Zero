#include<stdio.h>
void main()
{
	int a[30],s,n,r;
	printf("Enter the String Number:");
	scanf("%d",&s);
	printf("Enter the Number:");
	scanf("%d",&n);
	while(s>0)
	{
		r=s%10;
		a[i]=r;
		s=s/10;
		i++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
