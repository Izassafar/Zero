#include<stdio.h>
void main()
{
	int num,m,n;
	printf("Enter the two intervals");
	scanf("%d%d",&m,&n);
	for(num=m;num<=n;n++)
	{
	 if(num%2==0)
	 {
 		printf("%d",num);
 	}
	}
	}

