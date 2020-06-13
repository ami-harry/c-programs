// #include <stdio.h>
// #include <stdlib.h>
// int myfun(int arr[], int size);
// int sum(int arr[], int size);
// int large(int arr[], int size);
// int small(int arr[], int size);

// int main()
// {
//     int harry[100], average, sum1 = 0, size, big = 0, less = 0;
//     printf("Enter the size of the array\n");
//     scanf("%d", &size);
//     if (size >= 100)
//     {
//         printf("Enter valid size less than 100\n");
//         exit(0);
//     }
//     printf("Enter  %d elements for array\n", size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the value for index no %d\n", i);
//         scanf("%d", &harry[i]);
//     }
//     printf("The array elements are\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", harry[i]);
//     }
//     printf("\n");

//     average = myfun(harry, size);
//     sum1 = sum(harry, size);
//     big = large(harry, size);
//     less = small(harry, size);
//     printf("The average is %d\n", average);
//     printf("the sum is %d\n", sum1);
//     printf("The largest element is %d\n", big);
//     printf("The smallest element is %d\n", less);

//     return 0;
// }

// int myfun(int arr[], int size)
// {
//     int avg = 0, sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     avg = sum / size;
//     return avg;
// }

// int sum(int arr[], int size)
// {
//     int sum1 = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum1 += arr[i];
//     }
//     return sum1;
// }

// int large(int arr[], int size)
// {
//     int large = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > large)
//         {
//             large = arr[i];
//         }
//     }
//     return large;
// }

// int small(int arr[], int size)
// {
//     int small = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (small > arr[i])
//         {
//             small = arr[i];
//         }
//     }
//     return small;
// }

#include <stdio.h>
#include <stdlib.h>
int sum_of_array(int arr[], int size);
int average_of_array(int arr[], int size);
int largest_element_of_array(int arr[], int size);
int smallest_element_of_array(int arr[], int size);
int factorial_of_nth_index(int arr[], int size);
int square_of_elements(int arr[], int size);

int main()
{
    int harry[100], sum = 0, large = 0, small = 0, average = 0, size = 0, fact = 1, square = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size >= 100)
    {
        printf("Enter the size in limit\n");
        exit(0);
    }

    printf("Enter %d elements for array\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for %d index \n", i);
        scanf("%d", &harry[i]);
    }

    printf("The array elements are\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", harry[i]);
    }
    printf("\n");

    sum = sum_of_array(harry, size);
    average = average_of_array(harry, size);
    large = largest_element_of_array(harry, size);
    small = smallest_element_of_array(harry, size);
    fact = factorial_of_nth_index(harry, size);
    square = square_of_elements(harry, size);

    printf("The sum of array elements are %d\n", sum);
    printf("The average of array elements are %d\n", average);
    printf("The largest of array elements are %d\n", large);
    printf("The smallest of array elements are %d\n", small);
    printf("Factorial of last element is %d\n", fact);
    printf("Factorial of last element is %d\n", square);

    return 0;
}

int sum_of_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int average_of_array(int arr[], int size)
{
    int sum = 0, avg = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}

// factorial of nth element
int largest_element_of_array(int arr[], int size)
{
    int large = 0;
    for (int i = 0; i < size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }
    return large;
}

int smallest_element_of_array(int arr[], int size)
{
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }

    return small;
}

int factorial_of_nth_index(int arr[], int size)
{
    int fact = 1;
    for (int i = 1; i < size; i++)
    {
        fact *= arr[i];
    }
    return fact;
}

int square_of_elements(int arr[], int size)
{
    int sq = 1;
    for (int i = 0; i < size; i++)
    {
        
        sq = arr[i] * arr[i];
    }
    return sq;
}
