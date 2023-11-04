#include<stdio.h>
// code 1
// Enter the number of rows: 5
// ***********
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *

// int main()
// {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     for (int k = 1; k <= 2 * n + 1; k++)
//     {
//         printf("*");
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {

//         for (int k = 1; k <= nst; k++)
//         {
//             printf("*");
//         }

//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= nst; k++)
//         {
//             printf("*");
//         }
//         nst--;
//         nsp += 2;
//         printf("\n");
//     }

//     return 0;
// }


// code 2
// Enter the number of rows: 3
// 1234567
// 123 567
// 12   67
// 1     7

// int main()
// {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
    // for (int k = 1; k <= 2 * n + 1; k++)
    // {
    //     printf("%d",k);
    // }
    // printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int k = 1; k <= nst; k++)
//         {
//             printf("%d",a);
//             a++;
//         }

//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//             a++;

//         }
//         for (int k = 1; k <= nst; k++)
//         {
//             printf("%d",a);
//             a++;
//         }
//         nst--;
//         nsp += 2;
//         printf("\n");
//     }

//     return 0;
// }


// code 3
// Enter the number of rows: 3
// ABCDEFG
// ABC EFG
// AB   FG
// A     G

// int main()
// {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     int nst = n;
//     int nsp = 1;
//     for (int k = 1; k <= 2 * n + 1; k++)
//     {   
//         char ch= (char)(k+64);
//         printf("%c",ch);
//     }
//     printf("\n");
//     for (int i = 1; i <= n; i++)
//     {
//         int a=1;
//         for (int k = 1; k <= nst; k++)
//         {   
//             char ch= (char)(a+64);
//             printf("%c",ch);
//             a++;
//         }

//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//             a++;

//         }
//         for (int k = 1; k <= nst; k++)
//         {
//             char ch= (char)(a+64);
//             printf("%c",ch);
//             a++;
//         }
//         nst--;
//         nsp += 2;
//         printf("\n");
//     }

//     return 0;
// }

// code 4
// Enter no of rows : 4
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

// int main()
// { 
//     int n;
//     printf("Enter no of rows : ");
//     scanf("%d",&n);

//     int min;
//     for(int i=1 ;i<=2*n-1 ;i++ )
//     {
//         for(int j=1;j<=2*n-1;j++)
//         {
//         int a=i;
//         if(i>n) a=2*n-i;
//         int b=j;
//         if(j>n) b=2*n-j;

//         if(a>b) min=b;
//         else min=a;
//         printf("%d ",n+1-min);

//         }
//        printf("\n"); 

//     }


//     return 0;
// }


// code 5

int main()
{
    int n;

    printf("Enter the no of rows : ");
    scanf("%d", &n);
    for (int k = 1; k <= 2 * n + 1; k++)
    {
        printf("%d", k);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d", j);
        }

        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        int f=i;
        int nsp = 0;
        int nst = n;
        for (int l = 1; l <= n; l++)
        {
            for (int j = 1; j <= nsp; j++)
            {
                printf(" ");
            }

            int a=n+1-f;     
            for (int k = 1; k <= nst; k++)
            {
                printf("%d",a);
                a--;
            }
            f++;
            nst--;
            nsp++;

            printf("\n");
        }

        return 0;
    }
}