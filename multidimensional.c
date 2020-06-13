#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100][100], row_size = 0, col_size = 0;
    printf("Enter the Row_size for the matrix\n");
    scanf("%d", &row_size);
    printf("Enter the Column_size for the matrix\n");
    scanf("%d", &col_size);
    if (row_size >= 100 || col_size >= 100)
    {
        printf("Enter the size in limit\n");
        exit(0);
    }
    printf("Enter the elements for mtrix of %dX%d \n", row_size, col_size);
    for (int i = 0; i < row_size; i++)
    {
        printf("At %d Row  ", i);
        for (int j = 0; j < col_size; j++)
        {
            printf("the value of column %d is\n", j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements are \n");
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    printf("The  array elements in form of matrix\n");
    for (int i = 0; i < row_size; i++)
    {

        for (int j = 0; j < col_size; j++)
        {
            printf("Element at arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}