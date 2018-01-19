#include <stdio.h>
int main()
{
     int i,a[50],n,sum=0,avg;
    printf("Enter the Size :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    avg=sum/n;
    printf("%d",avg);
    return 0;
    
}
