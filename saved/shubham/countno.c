#include<stdio.h>
int main()
{
int n,count=0;
printf(enter the no.=);
scanf("%d",&n)
while(n>0)
{
n=n/10;
count++;
}
printf("%d nos are there in %d no",count,n);
return 0;
}
