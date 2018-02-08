#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],odd[50],even[50];
	int i,j,k,l;
	printf("Enter the string:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			odd[j]=s[i];
			j++;
		}
		else
		{
			even[k]=s[i];
			k++;
		}
	}
	printf("%s%s",odd,even);
}
