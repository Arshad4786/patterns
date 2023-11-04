// code 1
// output
// Enter the no of rows : 5
//     *
//    ***
//   *****
//  *******
// *********

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the no of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
// }



// code 2
// output 
// Enter the no of rows : 5
//     1
//    123
//   12345
//  1234567
// 123456789




// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the no of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             printf("%d",j);
//         }

//         printf("\n");
//     }
// }


// code 3
// output 
// Enter the no of rows : 5
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI


// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the no of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         int a=1;

//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             int d = a+64;
//             char ch= (char)d;
//             printf("%c",ch);
//             a++;
            
//         }

//         printf("\n");
//     }
// }





// code 4
// output


// Enter the no of rows : 6
//      1
//     121
//    12321
//   1234321
//  123454321
// 12345654321

#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the no of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n - i; j++)
//         {

//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         int a = i - 1;
//         for (int k = 1; k <= i - 1; k++)
//         {
//             printf("%d", a);
//             a--;
//         }

//         printf("\n");
//     }
// }


// code 5
// output 
// Enter the no of rows : 4
//    A
//   ABA
//  ABCBA
// ABCDCBA





// int main()
// {
//     int n;
//     printf("Enter the no of rows : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= n - i; j++)
//         {

//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             char ch = (char)(j+64);
//             printf("%c", ch);
//         }
//         int a = i - 1;
//         for (int k = 1; k <= i - 1; k++)
//         {
//             char ch = (char)(a+64);
//             printf("%c", ch);
//             a--;
//         }

//         printf("\n");
//     }
// }