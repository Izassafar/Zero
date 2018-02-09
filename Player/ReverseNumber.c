#include<stdio.h>
void main()
{
    int num,r,rev=0;
    printf("Enter the Number:");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        rev=(rev*10)+r;
        num=num/10;
    }
    printf("The Reversed Number is %d",rev);
}
