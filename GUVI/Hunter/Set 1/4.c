//Print the Numbers which appears only once

#include<stdio.h>
int find_repeat(int n,int a[],int b[])
{
    int i,j,c;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",a[i]);
        }
    }
}
int main()
{
    int i,j,n,a[50],b[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[j]=a[i];
        j++;
    }
    find_repeat(n,a,b);
}
