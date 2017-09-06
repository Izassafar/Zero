#include<stdio.h>
void main()
{
int ch;
printf("Enter the character:");
scanf("%s",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
printf("The character is vowel");
}
else
{
printf("The character is consonant");
}
}

