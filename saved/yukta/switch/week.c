#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
printf("\nenter the number from 1 to 7\n");
scanf("%d",&i);
switch(i)
     {   
      case 1:
         printf("monday");
         break;
     case 2:
        printf("tuesday");
        break;  
     case 3:
        printf("wednesday");
        break;
     case 4:
      printf("thursday");
      break;
     case 5:
      printf("friday");
      break;
     case 6:
      printf("saturday");
      break;
      case 7:
      printf("sunday");
      break;
     default:
     printf("\n invalid option\n");
     }
return 0;
}

