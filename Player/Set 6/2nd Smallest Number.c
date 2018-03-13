#include<stdio.h>
void main()
{
	int i,j,n,temp,s[50];
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
			}
		}
	}
	printf("%d",s[1]);

	
}
