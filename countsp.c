#include<stdio.h>
#include<string.h>
void main()
{
	int i,l,count=0;
	char str[100];
	printf("Enter the String:");
	scanf("%s",&str);
	for(i=0;i<=l;i++)
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]=='.')||(str[i]==','))
		{
			count++;
		}
	}
	printf("%d",&count);
}
