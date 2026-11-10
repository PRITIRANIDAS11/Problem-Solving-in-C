#include <stdio.h>

int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("factorial %d = %d", a, factorial(a));
}