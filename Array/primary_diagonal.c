#include <stdio.h>

int main()
{
    int i, j, r, c;

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

    // Output
    printf("The array is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
