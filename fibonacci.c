// #include <stdio.h>
// int main()
// {
//     int input;
//     int firstterm,secondterm,nextterm;
//     printf("enter range for getting fibonacci series - ");
//     scanf("%d", &input);
//     for (int i = 0; i <= input; i++)
//     {
//         if (i==0)
//         {
//             firstterm=i;                    //fibonacci series my way
//             printf("%d",firstterm);
//         }
//         else if (i==1)
//         {
//             secondterm=i;
//             printf("%d",secondterm);
//         }
//         else
//         {
//             nextterm=firstterm+secondterm;
//             firstterm=secondterm;
//             secondterm=nextterm;
//         }
//         printf("%d\n",nextterm);

//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int input;
//     int firstterm=0,secondterm=1,nextterm;
//     printf("enter range for getting fibonacci series - ");  //another way
//     scanf("%d", &input);
//     for (int i = 0; i <= input; i++)
//     {
//         if (i<=1)
//         {
//             nextterm=i;

//         }
//         else
//         {
//             nextterm=firstterm+secondterm;
//             firstterm=secondterm;
//             secondterm=nextterm;
//         }
//         printf("%d\n",nextterm);

//     }

//     return 0;
// }

#include <stdio.h>
int fibonacci(int num)

{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;  //fibonacci seris using function
    }
    else

        return (fibonacci(num - 1) + fibonacci(num - 2));
}

int main()
{
    int userinput;
    printf("ENTER THE RANGE FOR FIBONACCI SIRIES - ");
    scanf("%d", &userinput);
    for (int i = 0; i < userinput; i++)
    {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}
