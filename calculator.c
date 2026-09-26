#include <stdio.h>
int main()
{
    int num1, num2;
    char ch;
    scanf("%d %c %d", &num1, &ch, &num2);

    if (ch == '+')
    {
        int sum = num1 + num2;
        printf("%d %c %d = %d\n", num1, ch, num2, sum);
    }
    else if (ch == '-')
    {
        int sub = num1 - num2;
        printf("%d %c %d = %d\n", num1, ch, num2, sub);
    }
    else if (ch == '*')
    {
        int gun = num1 * num2;
        printf("%d %c %d = %d\n", num1, ch, num2, gun);
    }
    else if (ch == '/')
    {
        int div = num1 / num2;
        printf("%d %c %d = %d\n", num1, ch, num2, div);
    }

    return 0;
}