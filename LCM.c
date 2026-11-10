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

int LCM(int a, int b)
{
    return a * b / GCD(a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("LCM(%d,%d)=%d\n", a, b, LCM(a, b));
}