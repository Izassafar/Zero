#include <stdio.h>
int main()
{
    int i,a[5],n=2,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("The sum is %d",sum);
    return 0;
}
