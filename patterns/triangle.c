#include<stdio.h>
#include<conio.h>


// code 1 

// output
// *
// **
// ***
// ****
// *****

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }




// code 2 
//output
// Enter the number of rows: 4
// ****
// ***
// ** 
// *  


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=n+1-i ; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

//OR 

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int a =n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=a ; j++)
//         {
//             printf("*");
//         }
//     a--;

//         printf("\n");
//     }

//     return 0;
// }


// code 3
// output 


// 1
// 12
// 123
// 1234

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i ; j++)
//         {
//             printf("%d",j);
//         }
    
//      printf("\n");
//     }

//     return 0;
// }




// code 4

// output 


// Enter the number of rows: 4
// 1234
// 123
// 12
// 1


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=n+1-i ; j++)
//         {
//             printf("%d",j);
//         }
    
//      printf("\n");
//     }

//     return 0;
// }

// code 5
// output 

// Enter the number of rows: 4
// 1 
// 1 3
// 1 3 5
// 1 3 5 7



// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int j = 1; j<=i ; j++)
//         {
            
//             printf("%d ",a);
//             a=a+2;
//         }
    
//      printf("\n");
//     }

//     return 0;
// }



// code 5
// output 

// Enter the number of rows: 4
// A 
// A B
// A B C
// A B C D





// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int j = 1; j<=i ; j++)
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


 // code 6

 // output
// Enter the number of rows: 5
// 1 
// A B
// 1 2 3
// A B C D 
// 1 2 3 4 5


// int main()
// {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         if (i % 2 == 0)
//         {

//             int a = 1;
//             for (int j = 1; j <= i; j++)
//             {
//                 int d = a + 64;
//                 int ch = (char)d;
//                 printf("%c ", ch);
//                 a++;
//             }

//             printf("\n");
//         }
//         else
//         { 
//                 for (int j = 1; j <= i; j++)
//                 {
//                     printf("%d ", j);
//                 }

//                 printf("\n");
            
//         }
//     }

//     return 0;
// }


// code 7 
// output 
// Enter the number of rows: 5
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int a =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i ; j++)
//         {
        
//             printf("%d ",a);
//             a++;
//         }

    
//      printf("\n");
//     }

//     return 0;
// }


// code 8
// output 
// Enter the number of rows: 5
// 1 
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int a =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i ; j++)
//         {
        
//             printf("%d ",a);
//             a+=2;
//         }

    
//      printf("\n");
//     }

//     return 0;
// }


// code 9
// output 
// Enter the number of rows: 5
// 1 
// 3 5
// 7 9 11
// 13 15 17 19
// 21 23 25 27 29


// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int a =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j<=i ; j++)
//         {
        
//             printf("%d ",a);
//             a+=2;
//         }

    
//      printf("\n");
//     }

//     return 0;
// }


// code 10
// output 
// Enter the number of rows: 4
// 1 
// 0 1
// 1 0 1
// 0 1 0 1

//method 1 with variables:

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int a;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i%2!=0) a=1;
//         else a=0;
//         for (int j = 1; j<=i ; j++)
//         {
        
//             printf("%d ",a);
//             if(a==0) a=1;
//             else a=0;
//         }

    
//      printf("\n");
//     }

//     return 0;
// }


//method 2 without variables:

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j<=i ; j++)
//         {
        
//           if((i+j)%2==0) printf("1 ");
//           else printf("0 ");
         

//         }

    
//      printf("\n");
//     }

//     return 0;
// }



// code 11 
// output
// Enter the number of rows: 4
//    *
//   **
//  ***
// ****




// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i ;j++ )
//         printf(" ");


//         for(int k=1 ;k<=i ;k++ )
//         printf("*");

//         printf("\n");

//     }

//     return 0;
// }


// code 12
// output (Rhombus)
// Enter the number of rows: 4
//    ****
//   ****
//  ****
// ****

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i ;j++ )
//         printf(" ");


//         for(int k=1 ;k<=n ;k++ )
//         printf("*");

//         printf("\n");

//     }

//     return 0;
// }



// code 13
// output
// Enter the number of rows: 4
//    A
//   AB
//  ABC
// ABCD

// int main()
// {
//     int n;
    
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
        
//         for (int j = 1; j <= n - i; j++)
//         {
//         printf(" ");
//         } 

//         int a=1;  
//         for (int k = 1; k <= i; k++)
//         {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c", ch);
//             a++;
//         }
//             printf("\n");
        
//     }

//     return 0;
// }


// code 14
// output
// Enter the number of rows: 5
// *****
//  ****
//   ***
//    **
//     *

// int main()
// {
// int n;
// printf("Enter the number of rows: ");
// scanf("%d",&n);
// int nsp=0;
// int nst=n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=nsp ;j++ )
//         {
//         printf(" ");
//         }

//         for(int k=1 ;k<=nst ;k++ )
//         {
//         printf("*");
//         }   
//         nst--;
//         nsp++;

//         printf("\n");

//     }

//     return 0;
// }


