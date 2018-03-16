#include<stdio.h>
void main()
{
	int i,count=0,t;
	char a[50];
	printf("Enter the String:");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			count=count+1;
		}
	}
	while(count>1)
	{
		for(i=0;a[i]!=0;i++)
		{
			if(a[i]==' ')
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
		count--;
	}
	printf("%s",a);
}
