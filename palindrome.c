#include <stdio.h>
void main()
{
int n,a,b=0,r;
printf("Enter an integer: ");
scanf("%d",&n);
a=n;
while(n!=0)
{
r=n%10;
b=b*10+r;
n=n/10;
}
if(a==b)
printf("%d is a palindrome.",a);
else
printf("%d is not a palindrome.",a);
}
