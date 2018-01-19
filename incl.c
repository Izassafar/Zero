#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n>=0&&n<=10)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
