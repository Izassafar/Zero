#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0;
	char str[100];
	printf("Enter the String:");
	scanf("[^\n]%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d",&count);
}
