#include<stdio.h>

void rt(int);

int main()
{
	int n;
	
	printf("Enter the no.:");
	scanf("%d",&n);
	
	rt(n);
	
	return 0;
}

void rt(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}
