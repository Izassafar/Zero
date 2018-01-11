#include<stdio.h>
void main()
{
	int i=0,count=0;
	char str[30];
	printf("Enter the String:");
	scanf("%s",&str);
	while(str[i]!='\0')
	{
		if(str[i]=="[^n]")
		{
			++count; 
		}
		++i;
	}
	++count;
	printf("%d",count);
}
