#include<stdio.h>
int main()
{
    int i,j,n,s;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=1;
        for(j=n;j>=i;j--)
            printf("%d",s++);
        printf("\n");
    }
    return 0;
}



