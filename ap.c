#include<stdio.h>
void main()
{
	int i,a,n,d,sum=0;
	printf("Enter the Number of terms:");
	scanf("%d",&n);
	printf("Enter the Starting Number:");
	scanf("%d",&a);
	printf("Enter the Diffrence:");
	scanf("%d",&d);
	for(i=1;i<=n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	printf("The Arithematic Progression of Given Number is %d",sum);
}
