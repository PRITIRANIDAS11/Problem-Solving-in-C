#include <stdio.h>

int sumofdigit(int a)
{
    int rem, sum = 0;
    for (; a != 0;)
    {
        rem = a % 10;
        sum = sum + rem;
        a = a / 10;
    }
    return sum;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", sumofdigit(a));
}