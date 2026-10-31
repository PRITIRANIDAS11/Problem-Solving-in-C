#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
