#include <stdio.h>

int reverse(int a)
{
    int rem, stor_box = 0;
    for (; a != 0;)
    {
        rem = a % 10;
        stor_box = stor_box * 10 + rem;
        a = a / 10;
    }
    return stor_box;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", reverse(a));
}