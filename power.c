#include<stdio.h>
void main()
{
int a,i,n=1;
printf("Enter the base number");
scanf("%d",&a);
printf("Enter the Exponent");
scanf("%d",i);
while(i!=0)
{
n=n*a;
i--;
}
printf("The number is %d",n);
}
