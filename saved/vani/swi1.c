#include<stdio.h>
int main()
{
char ch;
printf("enter the value");
scanf("%c",&ch);
switch(ch)

{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("  is vowel");
break;
default:
printf("is not a vowel");
}
return 0;
}

