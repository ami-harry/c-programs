// // Live Demo
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// /* functon to generate and return random numbers */
// int *getRandom()
// {

//     static int r[10];

//     /* set the seed */
//     srand((unsigned)time(NULL));

//     for (int i = 0; i < 10; ++i)
//     {
//         r[i] = rand();
//         printf("r[%d] = %d\n", i, r[i]);
//     }

//     return r;
// }

// /* main function to call above defined function */
// int main()
// {

//     /* a pointer to an int */
//     int *p;

//     p = getRandom();

//     for (int i = 0; i < 10; i++)
//     {
//         printf("*(p + %d) : %d\n", i, *(p + i));
//     }

//     return 0;
// }

/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *another_loc();
int *old_add();

int main()
{
    int *hk, *har;

    hk = old_add();
    printf("\n");
    printf("Address allocated while calling the function\n");
    for (int i = 0; i < 10; i++)
    {
        printf("*(hk+%d) is %d\n", i, *(hk + i));
    }
    printf("\n\n");
    printf("\n\n");

    har = another_loc();
    printf("Address allocated while calling the function\n");
    for (int i = 0; i < 5; i++)
    {
        printf("*(har+%d) is %d\n", i, *(har + i));
    }

    return 0;
}

int *old_add()
{
    static int hk[10];
    srand((unsigned)time(NULL)); //here we are fixing the address at time it was allocated. so it will not be changed duing accesing

    printf("\n\nAddress allocated using function\n");
    for (int i = 0; i < 10; i++)
    {

        hk[i] = rand();
        printf("hk[%d] is %d\n", i, hk[i]);
    }
    printf("\n");
    return hk;
}

int *another_loc()
{
    static int har[5];
    
    srand((unsigned)time(NULL));
    printf("Address allocated using function\n");
    for (int i = 0; i < 5; i++)
    {
        har[i] = rand();
        printf("har[%d] is %d\n", i, har[i]);
    }
    printf("\n");
    return har;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *address();
int main()
{

    int *hk;
    hk = address();
    for (int i = 0; i < 10; i++)
    {
        printf("%d at %d\n", i, hk[i]);
    }
    printf("\n");
    return 0;
}

int *address()
{
    static int arr[10];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
        printf("at  arr[%d] is %d\n", i, arr[i]);
    }
    return arr;
}