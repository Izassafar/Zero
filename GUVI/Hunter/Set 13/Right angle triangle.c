//Print Right Angle Triangle of 1's

#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
}
