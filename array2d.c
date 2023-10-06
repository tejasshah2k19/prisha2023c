#include <stdio.h>

int main()
{
    // we can create two d array using row and column
    // syntax
    int i, j;
    int a[4][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    //    int a[4][3]; // 4 is for row and 3 is for column
    // so we can store  total 4*3 elements in the array -> total 12 numbers we can store
    // you can ask for row or column from 0th index
    // so if you want to access element from 1st row 1st column then your index will be
    // 0,0 a[0][0] => this will gives you value of 1st row 1st column

    // in above example we have 4 row and 3 column
    //      0    1   2
    //  0   00   01  02         1   2   3
    //  1   10   11  12         4   5   6
    //  2   20   21  22         7   8   9  a[2][2]
    //  3   30   31  32         10  11  12

    // for (i = 0; i < 4; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("\nEnter number");
    //         scanf("%d", &a[i][j]); //
    //     }
    // }

    for (i = 0; i < 4; i++) // 0 1
    {
        for (j = 0; j < 3; j++)
        {                           // 0 1 2
            printf("%d ", a[i][j]); //
        }
        printf("\n");
    }

    // logic -> that will shift 1 row with last row 2nd row with 2nd last row

    // 0
    // 1
    // 2
    // 3

    // 0
    // 1
    // 2
    // 3
    // 4
    int start = 1;
    int totalRow = 4;
    int swapRow;
    int tmp;
    for (i = 0; i < 4; i++) // i =0  x = totalrow-1 4  i=1 totalrow-2
    {
        swapRow = totalRow - start; // 4

        printf("\n row = %d  swapRow = %d", i, swapRow);
        if (i >= swapRow)
        {
            break; // break is used to break the loop - stop the loop
        }
        for (j = 0; j < 3; j++)
        {
            tmp = a[i][j];
            a[i][j] = a[swapRow][j];
            a[swapRow][j] = tmp;
        }
        start++;
    }
    // 0
    // 1
    // 2
    // 3
    // 4
    // 5
    printf("\nAfter Swap\n");
    for (i = 0; i < 4; i++) // 0 1
    {
        for (j = 0; j < 3; j++)
        {                           // 0 1 2
            printf("%d ", a[i][j]); //
        }
        printf("\n");
    }

    return 0;
}