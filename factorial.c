#include <stdio.h>
int factorial(n)
{
    if (n == 0)
    {
        return (1);
    }
    else
    {

        int fact;
        return( n * factorial(n - 1));
        
    }
}

int main()
{
    int n, a;
    printf("enter a value to get factorial of -");
    scanf("%d", &n);
    a = factorial(n);
    printf("%d", a);
    return 0;
}