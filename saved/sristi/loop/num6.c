#include<stdio.h>
int main()
{
 int i,j,n,s;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  s=n;
  for(j=1;j<=i;j++)
  printf("%d",s--);
  printf("\n");
 }

 return 0;
}
