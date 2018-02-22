#include<stdio.h>
void main()
{
	char a[30],s[30];
	int i,l;
	printf("Enter the String:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		s[i]=a[i]+3;
		printf("%c",s[i]);
	}
}
