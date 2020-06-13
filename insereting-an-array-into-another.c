// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr1[50], arr2[50], size1, size2, loc;
//     printf("Enter the size for the first array\n");
//     scanf("%d", &size1);
//     if (size1 >= 50)
//     {
//         printf("Enter no of Array elements less than 50\n");
//         exit(0);
//     }
//     printf("Enter %d elements for array1\n", size1);
//     for (int i = 0; i < size1; i++)
//     {
//         printf("Value for index no %d is \n", i);
//         scanf("%d", &arr1[i]);
//     }

//     printf("\n");
//     printf("Array 1 elements are \n");
//     for (int i = 0; i < size1; i++)
//     {
//         printf("%d\t", arr1[i]);
//     }
//     printf("\n");

//     printf("Enter the size for the second array\n");
//     scanf("%d", &size2);
//     if (size2 >= 50)
//     {
//         printf("Enter no of Array elements less than 50\n");
//         exit(0);
//     }
//     printf("\n");

//     printf("Enter %d elements for array2\n", size2);
//     for (int i = 0; i < size2; i++)
//     {
//         printf("Value for index no %d is \n", i);
//         scanf("%d", &arr2[i]);
//     }
//     printf("Array 2 elements are \n");
//     for (int i = 0; i < size2; i++)
//     {
//         printf("%d\t", arr2[i]);
//     }
//     printf("\n");

//     printf("Enter the location where you want to enter array 2 elements\n");
//     scanf("%d", &loc);

//     for (int i = size1 - 1; i >= loc; i--) //shifting elements by size of array 2.
//     {
//         arr1[i + size2] = arr1[i];
//     }
//     for (int i = 0; i < size2; i++) //inserting the elements of array2 into array1
//     {
//         arr1[loc + i] = arr2[i];
//     }

//     printf("After insertion Array 1 elements are \n");
//     for (int i = 0; i < size1 + size2; i++)
//     {
//         printf("%d\t", arr1[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// int arr1[100], arr2[100], size1, size2, loc;
// printf("Enter the size of the array 1\n");
// scanf("%d", &size1);
// printf("Enter %d elemnts for array1\n", size1);
// for (int i = 0; i < size1; i++)
// {
// printf("Enter the value for index no %d: \n", i);
// scanf("%d", &arr1[i]);
// }
// printf("Array1 elements are\n");
// for (int i = 0; i < size1; i++)
// {
// printf("%d\t", arr1[i]);
// }
//
// printf("\nEnter the size of the array 2\n");
// scanf("%d", &size2);
// printf("Enter %d elements for array2", size2);
// for (int i = 0; i < size2; i++)
// {
// printf("Enter value for index no %d:\n", i);
// scanf("%d", &arr2[i]);
// }
// printf("Array2 elements are\n");
// for (int i = 0; i < size2; i++)
// {
// printf("%d\t", arr2[i]);
// }
//
// printf("\nEnter the location where you want to insert the array2 elements\n");
// scanf("%d", &loc);
//
// for (int i = size1 - 1; i >= loc; i--)
// {
// arr1[i + size2] = arr1[i];
// }
//
// for (int i = 0; i < size2; i++)
// {
// arr1[i + loc] = arr2[i];
// }
//
// printf("After insertion the array1 elemnts are\n");
// for (int i = 0; i < size1+size2; i++)
// {
// printf("%d\t", arr1[i]);
// }
// printf("\n");
//
// return 0;
// // }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr1[100], arr2[100], loc, size1, size2;
    printf("Enter the size of the first array\n");
    scanf("%d", &size1);
    if (size1 >= 100)
    {
        printf("Please enter the array size less than 100\n");
        exit(0);
    }
    printf("Enter %d elements for array1\n", size1);
    for (int i = 0; i < size1; i++)
    {
        printf("Enter the value for  index no %d : \n", i);
        scanf("%d", &arr1[i]);
    }
    printf("The array elements are\n");
    for (int i = 0; i < size1; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");

    printf("Enter the size of the secod array\n");
    scanf("%d", &size2);
    if (size2 >= 100)
    {
        printf("Please enter the array size less than 100\n");
        exit(0);
    }
    printf("Enter %d elements for array2: \n", size2);
    for (int i = 0; i < size2; i++)
    {
        printf("Enter the value for  index no %d : \n", i);
        scanf("%d", &arr2[i]);
    }
    printf("The array elements are\n");
    for (int i = 0; i < size2; i++)
    {
        printf("%d\t", arr2[i]);
    }
    printf("\n");

    printf("Enter the location where you want to add the array 2\n");
    scanf("%d", &loc);

    for (int i = size1 - 1; i >= loc; i--)
    {
        arr1[size2 + i] = arr1[i];
        // printf("shifting the elements %d %d %d \n", arr1[size2 + i]);
    }
    for (int i = 0; i < size2; i++)
    {
        arr1[i + loc] = arr2[i];
        // printf("inserting the elements %d %d %d \n", arr1[i + loc]);
    }

    printf("\nAfter insertion the array1 elemnts are\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");
    return 0;
}