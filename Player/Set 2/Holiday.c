#include<stdio.h>
void main()
{
	char a[50];
	printf("Enter the Day:");
	scanf("%s",a);
	if((a[0]=='s')||(a[0]=='S'))
	{
		printf("\nHoliday");
	}
	else
	{
		printf("\nWorking Day");
	}
}
