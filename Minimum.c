#include<stdio.h>
void main()
{
	int a[20],i,min;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
}
