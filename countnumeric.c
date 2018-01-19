#include <stdio.h>
int main()
{
    int i,count=0;
    printf("Enter the Number:");
    scanf("%d",&i);
    while(i!=0)
    {
        i=i/10;
        count++;
    }
    printf("%d",count);
    return 0;
    
}
