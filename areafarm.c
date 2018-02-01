#include <stdio.h>
int main()
{
    float length,breadth,area;
    printf("Enter the Length:");
    scanf("%f",&length);
    printf("Enter the Breadth:");
    scanf("%f",&breadth);
    area=length*breadth;
    printf("The Area of Farm is %f",area);
    return 0;
}
