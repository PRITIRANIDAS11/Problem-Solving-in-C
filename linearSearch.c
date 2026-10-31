#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter 10 number:");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key:");
    scanf("%d", &key);

    int idx = -1;
    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] == key)
        {
            idx = i;
            printf("%d is found at index %d \n", key, i);
            break;
        }
    }

    if (idx == -1)
    {
        printf("%d is not found !\n", key);
    }

    return 0;
}
