#include<stdio.h>
int main()
{
int i,j,n,k;
printf("enter the no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<i;j++)
  printf(" ");
for(k=n;k>=i;k--)
printf("%d",i); 
printf("\n");
}
return 0;
}
