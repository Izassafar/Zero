#include<stdio.h>
int main()
{
    long int n,i,j=0,k,c=0,a[50];
    scanf("%ld",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }
    }
    for(k=1;k<=n;k++)
    {
        int flag=0;
        for(i=0;i<j;i++)
        {
            if(k%a[i]==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            c++;
        }
    }
    printf("%ld",c);
    return 0;
}
