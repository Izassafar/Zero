#include<stdio.h>
int main()
{
    char s[50];
    int i,r=0,l=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            r++;
        }
        if(s[i]==')')
        {
            l++;
        }
    }
    if(r==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
