// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);

//     if (N >= 1 && N <= 100)
//     {
//         printf("Within Range ");
//     }
//     else
//     {
//         printf("Out of Range ");
//     }
//     return 0;
// }

// Question:02

#include <stdio.h>
int main()
{
    int units_value, total_bill;
    scanf("%d", &units_value);

    if (units_value <= 0)
    {
        total_bill = 0;
    }

    else if (units_value <= 100)
    {
        total_bill = 5 * units_value;
        printf("%d", total_bill);
    }
    else if (units_value <= 200 && units_value >= 101)
    {
        total_bill = 7 * units_value;
        printf("%d", total_bill);
    }
    else
    {
        total_bill = 10 * units_value;
        printf("%d", total_bill);
    }
    return 0;
}