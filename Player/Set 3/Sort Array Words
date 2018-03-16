#include<stdio.h>
void main()
{
	int n,i,j;
	char s[10][10],t[50];
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strlen(s[i])<strlen(s[j]))
			{
				strcpy(t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",s[i]);
	}
}
