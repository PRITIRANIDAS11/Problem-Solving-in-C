#include <stdio.h>

int main(void)
{

    int Number;
    scanf("%d", &Number);

    int Factorial = 1;
    for (int i = 1; i <= Number; i++)
    {
        Factorial = Factorial * i;
    }

    printf("%d! = %d\n", Number, Factorial);

    return 0;
}