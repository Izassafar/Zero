#include<stdio.h>
void main()
{
	char a[50];
	int count=0,i;
	scanf("%s",&a);
	for(i=0;a[i]!='\n';i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			count++;
		}
	}
	for(i=0;a[i]!='\n';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Alpha Numeric");
	}

	else
	{
		printf("Not Alpha Numeric");
	}
}
