#include <stdio.h>
int main()
{
    int a, input;
    printf("enter a number to reverse -");
    scanf("%d", &input);

    a = reverse_num(input);
    printf("%d", a);
    return 0;
}
int rem, reverse = 0;
int reverse_num(int num)
{

    if (num)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        reverse_num(num / 10);
    }
    else
        return reverse;
    return reverse;
}
