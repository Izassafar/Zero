#include<stdio.h>
void main()
{
	char s[50];
	int i;
	printf("Enter the String:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(i%3==0)
		{
			printf("%c",s[i]);
		}
	}
}
