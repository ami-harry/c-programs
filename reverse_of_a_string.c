// #include <stdio.h>
// int main()
// {
//     int i, j, k;
//     char str[100];
//     char rev[100];
//     printf("Enter a string:\t");
//     scanf("%s", str);
//     printf("The original string is %s\n", str);
//     for (i = 0; str[i] != '\0'; i++)
//         ;
//     {
//         k = i - 1;
//     }
//     for (j = 0; j <= i - 1; j++)
//     {
//         rev[j] = str[k];
//         k--;
//     }
//     printf("The reverse string is %s\n", rev);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// char mystrg[60];
// int leng, g;
//
// Printing the program name and what the program will do printf("Program in C for reversing a given string \n ");
// printf("Please insert the string you want to reverse:\n ");
//
// fetch the input string from the user
// scanf("%s", mystrg);
//
// This will find the length of your string with the help of strlen() function of string.h header file
// leng = strlen(mystrg);
//
// iterate through each and every character of the string for printing it backwards or reverse direction
// for (g = leng - 1; g >= 0; g--)
// {
// printf("%c", mystrg[g]);
// }
// printf("\n");
// return 0;
// }
//

//
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[100];
// int length, rev;
// printf("Enter the string\n");
// scanf("%s", str);
// length = strlen(str);
// for (int rev = length - 1; rev >= 0; rev--)
// {
// printf("%c", str[rev]);
// }
// printf("\n");
// return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char str[20];
// int len, rev;
// printf("Enter the string\n");
// scanf("%s", str);
// len = strlen(str);
// for (int rev = len - 1; rev >= 0; rev--)
// {
// printf("%c", str[rev]);
// }
// printf("\n");
// return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
//
// int main()
// {
// int c, n;
// printf("Ten random numbers in [1,100]\n");
//
// for (c = 1; c <= 10; c++)
// {
// n = rand()%100 + 1;
// printf("%d\n", n);
// }
//
// return 0;
// // }

/*

#include <stdio.h>
int main()
{
    int num, i = 0, x, d;
    char *word_no[2000];
    printf("Enter an integer value: \n");
    scanf("%d", &num);
    while (num)
    {
        d = num % 10;
        num = num / 10;
        switch (d)
        {
        case 0:
            word_no[i++] = "zero";
            break;
        case 1:
            word_no[i++] = "one";
            break;
        case 2:
            word_no[i++] = "two";
            break;
        case 3:
            word_no[i++] = "three";
            break;
        case 4:
            word_no[i++] = "four";
            break;
        case 5:
            word_no[i++] = "five";
            break;
        case 6:
            word_no[i++] = "six";
            break;
        case 7:
            word_no[i++] = "seven";
            break;
        case 8:
            word_no[i++] = "eight";
            break;
        case 9:
            word_no[i++] = "nine";
            break;
        }
    }
    for (x = i - 1; x >= 0; x--)
    {
        printf("%s ", word_no[x]);
    }
    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, rem, i = 0;
    char *ch[20];
    printf("Enter the number\n");
    scanf("%d", &num);
    while (num)
    {
        rem = num % 10;
        num /= 10;

        switch (rem)
        {
        case 0:
            ch[i++] = "zero";
            break;
        case 1:
            ch[i++] = "one";
            break;
        case 2:
            ch[i++] = "two";
            break;
        case 3:
            ch[i++] = "three";
            break;
        case 4:
            ch[i++] = "four";
            break;
        case 5:
            ch[i++] = "five";
            break;
        case 6:
            ch[i++] = "six";
            break;
        case 7:
            ch[i++] = "seven";
            break;
        case 8:
            ch[i++] = "eight";
            break;
        case 9:
            ch[i++] = "nine";
            break;

        default:
            printf("Enter valid input\n");
            exit(0);
        }
    }
    for (int x = i - 1; x >= 0; x--)
    {
        printf("%s ", ch[x]);
    }
    printf("\n");
    return 0;
}