// Problem: Row-wise and Column-wise Sum of a 2D Array

#include <stdio.h>

int main()
{
    int i, j, r, c;
    int rowSum, colSum;

    printf("Enter Row and Column number: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Input
    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Row-wise sum
    for (i = 0; i < r; i++)
    {
        rowSum = 0;  // reset sum for each row
        for (j = 0; j < c; j++)
        {
            rowSum += arr[i][j];
        }
        printf("Row %d Sum = %d\n", i, rowSum);
    }

    // Column-wise sum
    for (j = 0; j < c; j++)
    {
        colSum = 0;  // reset sum for each column
        for (i = 0; i < r; i++)
        {
            colSum += arr[i][j];
        }
        printf("Column %d Sum = %d\n", j, colSum);
    }

    return 0;
}
