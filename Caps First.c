#include<stdio.h>
void main()
{
	char s[30];
	int i,l;
	printf("Enter the String:");
	scanf("%[^\n]s",s);
	l=strlen(s);
	s[0]=toupper(s[0]);
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			s[i+1]=toupper(s[i+1]);
		}
	}
	printf("\n%s",s);
}
