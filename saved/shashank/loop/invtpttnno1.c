#include<stdio.h>
  int main()
{
   int i,j,n,s;
   printf("enter the no. of row=");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
      {
       s=4;
       for(j=n;j>=i;j--)
           printf("%d",s--);
      printf("\n");
     }
   return 0;
 }
