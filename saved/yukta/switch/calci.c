 #include<stdio.h>
#include<stdlib.h>
int main()
{
int  choice,i,n,j,sum,diff,mul;
float div;
while(1)
{
   printf("\t\tMENU");
   printf("\n 1. addition\n");
   printf("\n 2. subtraction\n");
   printf("\n 3. muiltiplication\n");
   printf("\n 4. division\n");
   printf("\n 5. Exit");
   printf("\n\nenter your choice");
   scanf("%d",&n);
switch(n)
   {
  case 1:  
    printf("enter the two number");
    scanf("%d %d",&i,&j);
    sum=i+j;
    printf("sum=%d",sum);
    break;
case 2:
    printf("enter the two number");
    scanf("%d %d",&i,&j);
    diff=i-j;
    printf("diff=%d",diff);
    break;
case 3:
    printf("enter the two number");
    scanf("%d %d",&i,&j);
    mul=i*j;
    printf("mul=%d",mul);
    break;
case 4:   
    printf("enter the two number");
    scanf("%d %d",&i,&j);
    div=i/(float)j;
    printf("div=%f",div);
    break;
case 5:
     exit(0);
     break;
   }
}
return 0;
}
  
