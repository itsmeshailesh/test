#include<stdio.h>
int add();
int main()
{
int s;
printf("addtion of 2-no");
s=add();
printf("sum=%d",s);
return 0;
}
 int add()
{
int a,b,c;
printf("enter the 2-no");
scanf("%d%d",&a,&b);
c=a+b;
return (c);
}
