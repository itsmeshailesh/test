#include<stdio.h>
int main()
{
int i,j,n,k,l;
printf("enter the no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<i;j++)
  printf(" ");
for(k=i;k<=n;k++)
  printf("*");
for(l=i;l<n;l++)
  printf("*");
printf("\n");
}
return 0;
}
