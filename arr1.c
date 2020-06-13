//#include <stdio.h>
//int main()
//{
//      int arr[5];
//    for (int i = 0; i < 5; i++)
//  {
//        printf("%d\n", arr[i]);
//}

//return 0;
//}

// #include<stdio.h>
// int main(){
// int arr[5];
// for(int i=5; i>0; i--){
// printf("%d\n", arr[i]);}
// return 0;
//      }

// #include <stdio.h>
// int main()
// {
// int arr[100], sum = 0, size=0;
// printf("Enter the size of the array\n");
// scanf("%d", &size);
// printf("Enter array elements\n");
// for (int i=0; i < size; i++)
// {
// printf("Enter %d element:", i++);
// scanf("%d\n", &arr[i]);
// }
//
// printf("the array elements are\n");
// for (int i =0; i <=size-1; i++)
// {
// printf("%d\n", arr[i]);
// }
//
// printf("The sum of the array elements are\n");
// for (int i = 0; i <size; i++)
// {
// sum += arr[i];
// }
// printf("The sum is %d\n", sum);
//
// return 0;
// // }

// #include <stdio.h>
// int main()
// {
// int arr[100], sum = 0, size=0;
// printf("Enter the size of the array\n");
// scanf("%d", &size);
//
// printf("Enter array elements\n");
// for (int i = 1; i < size ; ++i)
// {
// printf("Enter the value for index no %d", i);
// scanf("%d\n", &arr[i]);
// }
// printf("The array elements are\n");
// for (int i = 0; i < size; i++)
// {
// printf("the array element at index no %d is %d\n", i, arr[i]);
// }
//
// for (int i = 0; i < size; i++)
// {
// sum += arr[i];
// }
// printf("the  sum is %d\n", sum);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
// int arr[10], size, sum = 0;
// int large = 0;
// printf("Enter the size of the array\n");
// scanf("%d", &size);
// printf("Enter the array elements\n");
// for (int i = 0; i < size; i++)
// {
// printf("Enter value for index no %d\n", i);
// scanf("%d", &arr[i]);
// }
// for (int i = 0; i < size; i++)
// {
//
// printf("the value at index no %d is %d\n", i, arr[i]);
// }
// printf("\n\nThe sum of array elements are\n");
// for (int i = 0; i < size - 1; i++)
// {
// sum += arr[i];
// }
// printf("sum is %d\n", sum);
//
// for (int i = 0; i < size; i++)
// {
// if (arr[i] > large)
// {
// large = arr[i];
// }
// }
// printf("%d is largest\n", large);
//
// return 0;
// // }

#include <stdio.h>
#include <stdlib.h>
int main()
{
        int arr[100], size, average = 0, sum = 0, choice;
start:
        printf("\t\t\t\t\t\t\tWelcome the the program \n");
        printf("Do you want to use it :)  okk \n\n 1 for yes and any key to exit the program\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

                printf("Enter the size of the array\n");
                scanf("%d", &size);
                if (size >= 100)
                {
                        printf("!!!OOps ...Enter the size less than 100\n");
                        exit(0);
                }
                printf("Enter the array elements\n");
                for (int i = 0; i < size; i++)
                {
                        printf("Value for index no %d\n", i);
                        scanf("%d", &arr[i]);
                }
                printf("The array elements are\n");
                for (int i = 0; i < size; i++)
                {
                        printf("The value of index no %d is %d\n", i, arr[i]);
                }

                printf("The sum is ");
                for (int i = 0; i < size; i++)
                {
                        sum += arr[i];
                }
                printf("%d\n", sum);
                printf("The average is %d\n", sum / size);

                int small = arr[0];
                for (int i = 0; i < size; i++)
                {
                        if (small > arr[i])
                        {
                                small = arr[i];
                        }
                }
                printf("The smallest no in array is %d\n", small);

                printf("\n\tif you want to use again\n press 1 to start again and any key to exit\n");
                scanf("%d", &choice);
                if (choice == 1)
                {
                        goto start;
                }
                else
                {
                        // exit(0);
                        goto def;
                }

                break;
        def:
        default:
                exit(0);
                break;
        }
        return 0;
}