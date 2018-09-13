//Print Repeated Numbers

#include<stdio.h>
int main()
{
    int n,i,j,a[40],c=0,k,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                k++;
            }
        }
        if(c>=1)
        {
            printf("%d ",a[i]);
        }
    }
    if(k==0)
    {
        printf("Unique");
    }
    return 0;

}
