// code to find weather a number is prime or not
#include <stdio.h>
int main()
{
    int userinput, i;
    printf("enter a number to find prime or not -");
    scanf("%d", &userinput);
    int flag = 1;
    for (int i = 2; i < userinput; i++)
    {
        if (userinput % i == 0)

        {
            flag = 0;

            break;
        }
    }

    if (userinput == 1)
    {
        printf("%d is niether prime nor composite number", userinput);
    }
    else if (flag == 0)
    {
        printf("not an prime number");
    }
    else
    {
        printf(" prime number");
    }

    return 0;
}