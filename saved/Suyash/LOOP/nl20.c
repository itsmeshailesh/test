/*          1 
       1  2  1 
    1  2  3  2  1 
 1  2  3  4  3  2  1 

*/
#include<stdio.h>

int main()
{
int i,j,k,l,n,s;

printf("\nEnter the no. of rows : ");
	scanf("%d",&n);


printf("\nRequired Pattern is : \n");

	for(i=1;i<=n;i++)
	{
	s=1;
		for(j=n;j>i;j--)
			printf("   ");
		for(k=1;k<=i;k++)
			printf(" %d ",s++);
		s=s-1;
		for(l=1;l<i;l++)
			printf(" %d ",--s);
	printf("\n");	
	}
	
return 0;

}
