#include<stdio.h>
void main()
{
	char a[10],i,flag;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
