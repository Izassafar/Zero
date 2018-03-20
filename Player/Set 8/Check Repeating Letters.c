#include<stdio.h>
void main()
{
	char s[40];
	int l,i,j,flag=0;
	printf("Enter the String:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
			{
				flag=1;
			}
		}
	}
	if(flag==1)
	 printf("Yes");
	else
	 printf("No");
}
