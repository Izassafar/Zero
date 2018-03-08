#include<stdio.h>
void main()
{
	char s[30];
	int i,count=0;
	printf("Enter the String:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
