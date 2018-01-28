#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	int r,l;
	printf("Enter the String:");
	scanf("%s",a);
	l=strlen(a);
	r=l/2;
	a[r]='*';
	printf("%s",a);
}
