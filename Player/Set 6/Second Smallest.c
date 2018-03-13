#include<stdio.h>
void main()
{
	int i,j,n,t,a[50];
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
			    a[i]=a[j];
			    a[j]=t;
			}
		}
	}
	printf("%d",a[1]);

	
}
