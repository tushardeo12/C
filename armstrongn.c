//to ckeck weather a entered number is a armstrong numer or not.
//0,1,153,370,371,407 are armstrong numbers.


#include <stdio.h>
int main()
{
    int num, reverse_number, copy,rem;
    printf("\nEnter any number:");
    scanf("%d", &num);
    copy = num;
    //User would input the number

    //Calling user defined function to perform reverse
    reverse_number = reverse_function(num);

    
    if (copy == reverse_number)
    {
        printf("this is an armstrong number");
    }else{
        printf("this is NOT an armstrong number");
    }

    return 0;
}
int sum=0,  rem;
reverse_function(int num)
{

    if (num)
    {
        rem = num % 10;
        rem = rem * rem * rem;
        sum = sum + rem;
        reverse_function(num / 10);
    }
    else
        return sum;
    return sum;
}