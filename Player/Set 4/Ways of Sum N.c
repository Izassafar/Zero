#include<stdio.h>
void main()
{
int n,i,c=0,j;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if((i*1)+(j*2)==n)
{
c++;
}
}
}
printf("%d",c);
}
