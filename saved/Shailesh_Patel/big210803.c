#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        big=a;
    if(b>c&&b>a)
        big=b;
    if(c>a&&c>b)
        big=c;
    printf("Greatest number is : %d",big);
    return 0;
}

