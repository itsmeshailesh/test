#include<stdio.h>
int power(int,int);
int main()
{
int a,b,p;
printf("enter the value of a and b\n\n");
scanf("%d%d",&a,&b);
p=power(a,b);
printf("power=%d\n",p);
return 0;
}
int power(int a,int b)
{
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return(p);
}

