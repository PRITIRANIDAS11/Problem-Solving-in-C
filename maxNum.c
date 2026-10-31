#include <stdio.h>
int main()
{

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_number = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (max_number < arr[i])
        {
            max_number = arr[i];
        }
    }

    printf("%d", max_number);

    return 0;
}