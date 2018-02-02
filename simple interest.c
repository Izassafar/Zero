#include<stdio.h>
void main()
{
	float si,p,r,t;
	printf("Enter the Principal value:");
	scanf("%f",&p);
	printf("Enter the Rate:");
	scanf("%f",&r);
	r=r/100;
	printf("Enter the Time:");
	scanf("%f",&t);
	si=p*(r*t);
	printf("%f",si);
}
