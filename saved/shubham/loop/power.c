/*write a c program to print f of n*/
#include<stdio.h>
int main()
{
int i,a,b,p=1;
printf("enter a and b");
scanf("%d%d",&a,&b);
for(i==1;i<=b;i++)
p=p*a;
printf("%d^%d=%d",a,b,p);
return 0;
}

