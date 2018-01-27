#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50];
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
