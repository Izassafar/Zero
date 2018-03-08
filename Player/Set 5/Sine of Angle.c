#include<stdio.h>
#include<math.h>
void main()
{
	float pi=3.14,value,r;
	int n;
	printf("Enter the Sine Value:");
	scanf("%d",&n);
	value=pi/180;
	r=sin(n*value);
	printf("\n%f",r);
}
