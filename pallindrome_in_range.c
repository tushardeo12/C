// // to print the pallindrome numbers in a given range.

// #include <stdio.h>
// int main()
// {
//     int num, copy, count, sum = 0, rem;
//     printf("\nEnter start of range :");
//     scanf("%d", &num);
//     printf("\nEnter end of range :");
//     scanf("%d", &count);

//     for (int i = num; i <= count; i++)
//     {
//         copy = i;

//         while (copy)
//         {
//             rem = copy % 10;
//             sum = sum * 10 + rem;
//             copy = copy / 10;
//         }

//         if (i == sum)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int num, rem, reverse_num, temp, start, end;

    printf("Enter the lower limit: ");
    scanf("%d", &start);

    printf("Enter the upper limit: ");
    scanf("%d", &end);

    printf("Palindrome numbers between %d and %d are: ", start, end);
    for (num = start; num <= end; num++)
    {
        temp = num;
        reverse_num = 0;
        while (temp)
        {
            rem = temp % 10;
            temp = temp / 10;
            reverse_num = reverse_num * 10 + rem;
        }
        if (num == reverse_num)
            printf("%d ", num);
    }
    return 0;
}