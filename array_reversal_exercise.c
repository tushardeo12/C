// #include <stdio.h>

// int arrayreversal(int array[])
// {
//     int i=0, j=9;
//     for (; i < 5; i++)
//     {
//         for (; j >= 5;)
//         {
//             // printf("%d , %d\n", array[i], array[j]);
//             int temp;
//             temp = array[i];
//             array[i] = array[j];
//             array[j] = temp;

//             // printf("%d , %d\n", array[i], array[j]);
//             j--;
//             break;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     printf("this is the array before reversal -");
//     for (int a = 0; a < 10; a++)
//     {
//         printf("%d ",arr[a]);
//     }

//     arrayreversal(arr);
//     printf("\nthis is the array before reversal -");
//     for (int a = 0; a < 10; a++)
//     {
//         printf("%d ",arr[a]);
//     }

//     return 0;
// }

#include <stdio.h>
// target: 67,6,5,4,3,2,1

// 7
// 1,2,3,4,5,6,67
// 67,2,3,4,5,6,1
// 67,6,3,4,5,2,1
// 67,6,5,4,3,2,1

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        //swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void arrayPrint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("Before reversing the array\n");
    arrayPrint(arr);
    arrayRev(arr);
    printf("\nAfter reversing the array\n");
    arrayPrint(arr);

    return 0;
}
