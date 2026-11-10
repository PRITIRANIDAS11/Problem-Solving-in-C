#include <stdio.h>

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("GCD(%d,%d)=%d\n", a, b, GCD(a, b));
}