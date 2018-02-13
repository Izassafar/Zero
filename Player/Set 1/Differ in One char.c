#include<stdio.h>
void main()
{
	int a[30],b[30],i,l,m,count=0;
	printf("Enter the Two Strings:");
	scanf("%s%s",a,b);
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<l||i<m;i++)
	{
		if(a[i]!=b[i])
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
