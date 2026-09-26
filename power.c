#include <stdio.h>
int main()
{
    int number, power_value;
    scanf("%d %d", &number, &power_value);

    int result = 1;

    for (int i = 1; i <= power_value; i++)
    {
        result = result * number;
    }
    printf("result = %d", result);
    return 0;
}

// OR,

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int c = pow(a, b);

//     printf("%d", c);
//     return 0;
// }