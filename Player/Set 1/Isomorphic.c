#include<stdio.h>
void main()
{
	char a[30],b[30];
	int i,j,m,n,flag;
	printf("Enter the Two Strings:");
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					flag=1;
				}
			}
			i++;
		}
	}
	if(flag==0)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
}
