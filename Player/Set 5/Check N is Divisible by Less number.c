#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(n%i==0)
		{
			if(i<n)
			{
				count++;
			}
		}
	}
	if(count>1)
	 printf("Yes");
	else
	 printf("No");
}
