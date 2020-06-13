// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int arr[50][50];
//     int row_size, column_size, sum = 0, avg = 0, add;
//     printf("Enter the size of the rows:\n");
//     scanf("%d", &row_size);
//     printf("Enter the size of the column:\n");
//     scanf("%d", &column_size);

//     if (row_size >= 100 || column_size >= 100)
//     {
//         printf("Enter the size in limit\n");
//         exit(0);
//     }

//     printf("Enter  %d elements for row of the matrix\n", row_size);
//     for (int i = 0; i < row_size; i++)
//     {
//         printf("Enter the value for raw index %d :\n", i);
//         scanf("%d", *&arr[i]);
//     }

//     printf("Enter  %d elements for row of the matrix\n", column_size);
//     for (int i = 0; i < column_size; i++)
//     {
//         printf("Enter the value for raw index %d :\n", i);
//         scanf("%d", *&arr[i]);
//     }

//     printf("The matrix is of %dX%d\n", row_size, column_size);

//     printf("The  rows matrix elements are\n");
//     for (int i = 0; i < row_size; i++)
//     {
//         printf("%d\t", *arr[i]);
//     }
//     printf("\n\n");

//     printf("The  columns matrix elements are\n");
//     for (int i = 0; i < column_size; i++)
//     {
//         printf("%d\t", *arr[i]);
//     }
//     printf("\n\n");

//     printf("Printing all the elements of the array as index\n");
//     for (int i = 0; i < row_size; i++)
//     {
//         for (int j = 0; j < column_size; j++)
//         {
//             printf("arr[%d][%d] is %d\n", i, i, arr[i][j]);
//         }
//     }
//     printf("\n\n");
//     return 0;
// }

//

// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
// {
// int arr[50][50];
// int row_size, column_size, sum = 0, avg = 0, add;
// printf("Enter the size of the rows:\n");
// scanf("%d", &row_size);
// printf("Enter the size of the column:\n");
// scanf("%d", &column_size);
// if (row_size >= 100 || column_size >= 100)
// {
// printf("Enter the size in limit\n");
// exit(0);
// }
//
// printf("The matrix will be of %dX%d\n", row_size, column_size);
// printf("Taking input array elements\n");
// printf("Enter matrix elements\n");
// for (int i = 0; i < row_size; i++)
// {
// printf("Enter rows %d\n", i + 1);
// for (int j = 0; j < column_size; j++)
// {
// printf("Enter column %d\n", j + 1);
//
// scanf("%d", &arr[i][j]);
// }
// }
//
// printf("Printing array elements\n");
// for (int i = 0; i < row_size; i++)
// {
// for (int j = 0; j < column_size; j++)
// {
// printf("arr[%d][%d] is %d\n", i, j, arr[i][j]);
// }
// }
// printf("\n");
//
// return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50][50];
    int row_size, column_size;
    printf("Enter the size of the rows:\n");
    scanf("%d", &row_size);
    printf("Enter the size of the column:\n");
    scanf("%d", &column_size);
    if (row_size >= 100 || column_size >= 100)
    {
        printf("Enter the size in limit\n");
        exit(0);
    }

    printf("The matrix will be of %dX%d\n", row_size, column_size);
    printf("Taking input array elements\n");
    printf("Enter matrix elements\n");
    for (int i = 0; i < row_size; i++)
    {
        printf("Enter rows %d\n", i + 1);
        for (int j = 0; j < column_size; j++)
        {
            printf("Enter column %d\n", j + 1);

            scanf("%d", &arr[i][j]);
        }
    }

    printf("Printing array elements\n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
        {
            printf("arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}
