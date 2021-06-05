// to check if a entered number is palindrome or not.


#include <stdio.h>
int main()
{
    int num, reverse_number, copy;
    printf("\nEnter any number:");
    scanf("%d", &num);
    copy = num;
    
    //User would input the number

    //Calling user defined function to perform reverse
    reverse_number = reverse_function(num);
    printf("%d\n",reverse_number);
    if ( reverse_number==copy )
    {
        printf("this is a plindrome number");
    }
    else
    {
        printf("this is NOT a plindrome number");
    }

    return 0;
}
int sum = 0, rem;
reverse_function(int num)
{

    if (num)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        reverse_function(num / 10);
    }
    else
        return sum;
    return sum;
}