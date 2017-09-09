 #include <stdio.h> 
 void main() 
 {
 	 char c;
 printf("Enter a character: ");
  scanf("%s",&c);
   if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
    printf("%s is an alphabet.",c);
     else
      printf("%s is not an alphabet.",c);
       }

