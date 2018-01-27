#include<stdio.h>
void main()
{
	int r,a,rev=0,s;
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		rev=rev*0+r;
		a=a/10;
			while(rev!=0)
	        {
	        	 s=rev%10;
		         rev=rev/10;
		         if(s%2==1)
		         {
		         	printf("%d",s);
				 }
	        }
	}
}
