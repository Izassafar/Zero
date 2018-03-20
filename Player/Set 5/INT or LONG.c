#include<stdio.h>
int main()
{
	long int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	if(n>=-32768&&n<=32767)
	{
		printf("INT");
	}
	else
	{
		printf("LONG LONG");
	}
	return 0;
}
