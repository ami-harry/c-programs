// using for loop
// we have to shift all the elements from th

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int arr[10], loc, val, size;
//     printf("Enter the size of the array\n");
//     scanf("%d", &size);
//     if (size >= 10)
//     {
//         printf("Enter size less than 10\n");
//         exit(0);
//     }
//     printf("Enter %d array elements\n", size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter the value for index no %d \n", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("The array elemnts are\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("The value of index no %d  is %d \n", i, arr[i]);
//     }

//     printf("Enter the new element which you want to enter\n");
//     scanf("%d", &val);
//     printf("Enter the location where  you want to add\n");
//     scanf("%d", &loc);

//     for (int i = size - 1; i >= loc; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[loc] = val;
//     ;

//     printf("Now the new array elements are\n");
//     for (int i = 0; i < size+1; i++)
//     {
//         printf("The value of index no %d  is %d \n", i, arr[i]);
//     }

//     return 0;
// }



#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100], new_num, new_loc, size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    if (size >= 100)
    {
        printf("Enter array elements under limit\n");
        exit(0);
    }

    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("value for %d index no is ", i);
        scanf("%d", &arr[i]);
    }

    printf("array elements are\n");
    for (int i = 0; i < size; i++)
    {
        printf("value for %d index no is %d\n ", i, arr[i]);
    }
    printf("Enter the new element to add\n");
    scanf("%d", &new_num);
    printf("Enter the location where you want to add the new no\n");
    scanf("%d", &new_loc);

    for (int i = size - 1; i >= new_loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[new_loc] = new_num;

    printf("Now, the array elements are\n");
    for (int i = 0; i <= size; i++)
    {
        printf("value for %d index no is %d\n ", i, arr[i]);
    }

    return 0;
}