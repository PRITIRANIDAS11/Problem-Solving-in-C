#include <stdio.h>
int main()
{
    int n, original, reverse, remainder;
    scanf("%d", &n);

    original = n;
    reverse = 0;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}