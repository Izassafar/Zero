//Print the numbers which are Equal to their Index Values

#include<stdio.h>
int main()
{
    int n,i,a[40],c=0,b[40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==a[i])
        {
           b[c]=a[i];
           c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<c;i++)
        {
            printf("%d ",b[i]);
        }
    }
}
