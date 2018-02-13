#include <stdio.h>
void main()
 { 
 	int m,n,i,count=0;
     printf("Enter two numbers:");
     scanf("%d %d",&m,&n);
     while (m<n)
     { 
     count=0;
      for(i=2;i<=m/2;i++)
       { 
       	if(m%i==0) 
       	{ 
       		count++;
       		 break; 
       		 }
       	} 
      if(count==0)
      printf("%d ",m); 
      m++;
       }
     }
