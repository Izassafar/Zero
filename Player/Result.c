#include<stdio.h>
void main()
{
	int a,b,c,res;
	printf("Enter the terms a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	res=(a^b)%c;
	printf("\n%d",res);
}
