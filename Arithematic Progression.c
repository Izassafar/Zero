#include<stdio.h>
void main()
{
	int i,a,b,c,sum=0;
	printf("Enter the Starting Number:");
	scanf("%d",&a);
	printf("Enter the Diffrence:");
	scanf("%d",&b);
	printf("Enter the Number of terms:");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		sum=sum+a;
		a=a+b;
	}
	printf("The Arithematic Progression of Given Number is %d",sum);
}
