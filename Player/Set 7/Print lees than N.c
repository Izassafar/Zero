#include<stdio.h>
int main()
{
    int n,i,a[50],min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<n)
        {
            min=a[i];
            printf("%d ",min);
        }
    }
}
