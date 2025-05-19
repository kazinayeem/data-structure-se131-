#include <stdio.h>

int main()
{
    printf("Find array index Number : \n");
    int arr[5];
    int search_number;
    printf("Write Number :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Write Your Search Value :");
    scanf("%d", &search_number);
    int search_index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search_number)
        {
            search_index = i;
        }
    }
    printf("Search Index is %d", search_index);
    return 0;
}
