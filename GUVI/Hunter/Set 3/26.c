//Print the list in Reverse order with arrow

#include<stdio.h>
int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(i!=0)
        {
         printf("%d->",a[i]);
        }
        else
        {
            printf("%d",a[i]);
        }
    }
}
