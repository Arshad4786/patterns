#include <stdio.h>
#include <conio.h>

// code 1--

// output:
// *****
// *****
// *****
// *****

// int main()
// {
//     for (int i = 1; i <= 4; i++)  //--> no of rows
//     {

//         for (int j = 1;  j<= 5; j++)  //--> no of coloumns
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// code 2 

// output
// 12345
// 12345
// 12345
// 12345
// 12345


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }




// code 3
// output 

// A B C D 
// A B C D
// A B C D
// A B C D

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int j = 1; j<=n ; j++)
//         {
//             int d=a+64;
//             int ch= (char)d;
//             printf("%c ",ch);
//             a++;
//         }
    
//      printf("\n");
//     }

//     return 0;
// }


