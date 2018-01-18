#include<stdio.h>
#include<string.h>
void main()
{
	int i,l,count=0;
	char str[100];
	printf("Enter the Stance :");
	scanf("%s",&str);
	l=strlen(str);
	for(i=0;i<=l;i++)
	{
		if(str[i]=='.')
		{
			count++;
		}
	}
	printf("%d",count);
}
