#include<stdio.h>
int main()
{
    int n,i,a[50],k,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}
