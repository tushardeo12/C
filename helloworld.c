#include <stdio.h>
int main()
{int check;
   printf("enter a number to check - ");
   scanf("%d",&check);
   if (check<=0)
   {
       printf("this is a negative number");
   }
   else 
   {
      printf("this is a possitive number");
   }
   
   
   
   
    return 0;
}