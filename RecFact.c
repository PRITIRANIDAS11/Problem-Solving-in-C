#include <stdio.h>

int factorial(int a)
{
    if (a == 0 || a == 1)
        return 1; // Base Case
    return a * factorial(a - 1);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("factorial %d = %d", a, factorial(a));
}