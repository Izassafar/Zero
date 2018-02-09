#include<stdio.h>
void main()
{
    int n,k,i,a[20],count=0;
    printf("Enter the Size:");
    scanf("%d",&n);
    printf("Enter Check Number:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==k)
        {
            count++;
        }
    }
    printf("%d",count);
}

