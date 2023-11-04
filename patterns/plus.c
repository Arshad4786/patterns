#include <stdio.h>
#include <conio.h>


// code 1

// output 

// Enter no of rows : 5
//   *  
//   *
// *****
//   *
//   *

// int main()
// {
// int n;
// printf("Enter no of rows : ");
// scanf("%d",&n);
//     for (int i = 1; i <= n; i++)  //--> no of rows
//     {

//         for (int j = 1;  j<= n; j++)  //--> no of coloumns
//         {
//            if (j==n/2+1||i==n/2+1) printf("*");
//            else printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// code 2 
// output
// Enter no of rows : 5
// *   *
//  * *
//   *\

//  * *
// *   *

// int main()
// {
// int n;
// printf("Enter no of rows : ");
// scanf("%d",&n);
//     for (int i = 1; i <= n; i++)  //--> no of rows
//     {

//         for (int j = 1;  j<= n; j++)  //--> no of coloumns
//         {
//            if (j+i==n+1 || j==i) printf("*");
//            else printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

