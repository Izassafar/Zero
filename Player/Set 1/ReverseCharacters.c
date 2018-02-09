#include<stdio.h>
void main()
{
	char a[20],r[20];
	int i,j,n;
	printf("Enter the String:");
	scanf("%s",a);
	n=strlen(a);
	for(i=n;i>=0;i--)
	{
		r[j]=a[i];
		j++;
		printf("%c",a[i]);
	}
}
