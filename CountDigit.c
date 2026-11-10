#include <stdio.h>

int countdigit(int a)
{
    int count = 0;
    for (; a != 0;)
    {
        count++;
        a = a / 10;
    }
    return count;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", countdigit(a));
}