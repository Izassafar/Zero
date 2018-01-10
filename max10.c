#include<stdio.h>
void main()
{
	int i,a[30],temp;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("The Maximum Element is %d",a[i]);
}

