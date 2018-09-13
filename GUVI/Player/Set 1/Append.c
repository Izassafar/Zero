#include<stdio.h>
#include<string.h>
void main()
{
	char s[30],l;
	printf("Enter the String:");
	scanf("%s",s);
	l=strlen(s);
	s[l]='.';
	printf("\n%s",s);
}
