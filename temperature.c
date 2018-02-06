#include<stdio.h>
void main()
{
	float cel,kel;
	printf("Enter the Degree of Celsius:");
	scanf("%f",&cel);
	kel=cel+273.15;
	printf("The Temperature in Kelvin is %f",kel);
}
