#include<stdio.h>
void main()
{
	int min,hrs;
	printf("Enter the Minutes :");
	scanf("%d",&min);
	if(min<60)
	{
		min=min;
	}
	else
	{
		min=min%60;
		hrs=min/60;
	}
	printf("%d\t%d",hrs,min);
}
