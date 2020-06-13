#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20], large = 0, size = 0, avg = 0, sum = 0;
    int small = arr[0];

    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size >= 20)
    {
        printf("Please enter array size in limit\n");
        exit(0);
    }
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of array elements is %d\n", sum);
    printf("The average of array elements is %d\n", avg = (sum / size));
    printf("Smallest element in the array is %d\n", small);
    printf("The largest element of the array is %d\n", large);
    return 0;
}