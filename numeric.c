#include<stdio.h>
void main()
{
	char num;
	printf("Enter the Input:");
	scanf("%c",&num);
	if(num>=0&&num<=9)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
