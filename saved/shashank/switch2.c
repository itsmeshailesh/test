#include<stdio.h>
   int main()
{
   int n;
   printf("Enter any number =");
   scanf("%d",&n);
   switch(n%2==0)
    {
     case 1:
       printf("number is even");
     break;
     case 0:
     printf("number is odd");
     break ;
   }
   return 0;
}
