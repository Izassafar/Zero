#include <stdio.h>

int main()
{
    int n,i,a[30],sum=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("Enter the Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            sum=0;
        }
        else
        {
            sum=sum+a[i];
        }
    }
    if(sum>0)
     printf("%d",sum);
    else
     printf("%d",sum);
    return 0;
}
