//pattern
#include<stdio.h>
int main()
{
 int i,j,n,s;
printf("enter no. of row ");
scanf("%d",&n);

for(i=1; i<=n; i++)
	{ s=n; 
	  for(j=n; j>i; j--)
		{
 			printf(" ");		
	
		}

	for(j=1; j<=i; j++)
	{
		printf("%d",s--);
	}
   

	  printf("\n");
	}

return 0; 
}

