#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int store_box = 0;

    for (; n != 0;)
    {
        int rem = n % 10;
        store_box = store_box * 10 + rem;
        n = n / 10;
        printf("%d", rem);
    }
    return 0;
}