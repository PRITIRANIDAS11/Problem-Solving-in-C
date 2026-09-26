#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int number_of_digit = 0;
    for (; n != 0;)
    {
        number_of_digit++;
        n = n / 10;
    }
    printf("%d\n", number_of_digit);
    return 0;
}