#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    int sum = 0;
    for (int i = 0; i <= number; i = i + 2)
    {
        // if (i % 2 == 0)
        // {
        //     printf("%d", i);
        // }
        sum = i + sum;
    }
    printf("sum = %d\n", sum);
    return 0;
}