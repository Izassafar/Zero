#include <stdio.h>
#include<string.h>
int main()
{
    char s[20],p[50];
    int i,j;
    printf("Enter the String:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        {
            p[j]=s[i];
            j++;
        }
    }
    printf("%s",p);
    return 0;
}
