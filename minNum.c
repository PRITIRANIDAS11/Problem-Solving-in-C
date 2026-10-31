#include <stdio.h>
int main()
{

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min_number = 100;
    for (int i = 0; i <= 4; i++)
    {
        if (min_number > arr[i])
        {
            min_number = arr[i];
        }
    }
    printf("%d", min_number);

    return 0;
}