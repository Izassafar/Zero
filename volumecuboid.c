#include<stdio.h>
void main()
{
	int l,b,h,area,volume;
	printf("Enter the Length:");
	scanf("%d",&l);
	printf("Enter the Breadth:");
	scanf("%d",&b);
	printf("Enter the Height:");
	scanf("%d",&h);
	area=2*(l*b)+2*(b*h)+2*(h*l);
	printf("The Total Surface Area of Cuboid is %d",area);
	volume=l*b*h;
	printf("\nVolume of Cuboid is %d",volume);
	
}
