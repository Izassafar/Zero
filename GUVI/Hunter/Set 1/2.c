#include<stdio.h>
#include<math.h>
int rev_sort(int n,int a[])
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    Max_number_form(n,a);
}
int Max_number_form(int n,int b[])
{
    int max=0,i=0,d;
    d=n-1;
    while(i<n)
    {
        max=max+b[i]*(pow(10,d));
        //printf("%d ",max);
        i++;
        d--;
    }
    printf("%d",max);
}
int main()
{
    int i,j,a[50],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rev_sort(n,a);
    return 0;
}
