#include <stdio.h>

int fibonacci(int a)
{
    if (a == 0 || a == 1)
        return a; // Base Case
    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf(" The %dth number is %d\n", a, fibonacci(a));
}