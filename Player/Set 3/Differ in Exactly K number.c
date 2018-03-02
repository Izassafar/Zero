#include<stdio.h>
void main()
{
	char a[20],b[20];
	int i,j,k,c=0;
	printf("Enter First String:");
	scanf("%s",a);
	printf("Enter the Second String:");
	scanf("%s",b);
	printf("Enter K Number:");
	scanf("%d",&k);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			c++;
		}
	}
	if(c==k)
	 printf("yes");
	else
	 printf("No"); 
}
