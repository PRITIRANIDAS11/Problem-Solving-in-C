#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    int sum = 0;
    for (int i = 0; i <= number; i++)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}