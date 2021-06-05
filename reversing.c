#include<stdio.h>
int main()
{int input,rem,reverse=0;
    printf("enter a number to reverse -");
    scanf("%d",&input);
    while (input!=0)
    {
        rem=input%10;
        reverse=reverse*10+rem;
        input/=10;

    }
    printf("the reverse of the number is %d\n-",reverse);
    






    return 0;
}