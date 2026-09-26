#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);

    int sum = 0;
    for (int i = 1; i <= number; i = i + 2)
    {
        sum = i + sum;
    }
    printf("sum = %d\n", sum);
    return 0;
}