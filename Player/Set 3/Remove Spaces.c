#include<stdio.h>
void main()
{
	int i,j,l;
	char s[30];
	printf("Enter the String:");
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			for(j=i;j<l;j++)
			{
				s[j]=s[j+1];
			}
		}
	}
	printf("%s",s);
}
