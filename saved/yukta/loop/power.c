/*write a program to finmd the value of one number raised to the power of another*/


#include<stdio.h>
int main()
{
int i,a,b,p=1;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
p=p*a;
printf("%d^%d=%d",a,b,p);
return 0;
}

