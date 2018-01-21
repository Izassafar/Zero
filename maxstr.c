#include<stdio.h>
void main()
{
	char a[50],b[50];
	int la,lb;
	scanf("%s",&a);
	scanf("%s",&b);
	la=strlen(a);
	lb=strlen(b);
	if(la>lb)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
}
