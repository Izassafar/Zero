#include<stdio.h>
void main()
{
	int num;
	printf("Enter the Input:");
	scanf("%d",&num);
	if(num>=0&&num<=9)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
