/*write a c program to print all natural no. from 1 to n using while loop*/ 
#include<stdio.h>
int main()
{
int i,n;
printf("enter the natural no n=");
scanf("%d",&n);
i=1;

while(i<=n)
{
printf("%d\n",i);
i++;
}
return 0;
}
