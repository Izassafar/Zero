#include<stdio.h>
void main()
{
	int n,k,d;
	printf("Enter the N term:");
	scanf("%d",&n);
	printf("Enter the K term:");
	scanf("%d",&k);
	d=n/k;
	if(d==k)
	 printf("Yes");
	else
	 printf("No");
}
