#include<stdio.h>
void main()
{
	int m1,h1,m2,h2,m3,h3;
	printf("Enter the First hrs and mins:");
	scanf("%d%d",&h1,&m1);
	printf("Enter the Second hrs and mins:");
	scanf("%d%d",&h2,&m2);
	h3=abs(h1-h2);
	m3=abs(m1-m2);
	printf("The Diffrence of timings is %d\t%d",h3,m3);
}
