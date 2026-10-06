// Question:01

// #include <stdio.h>
// int main()
// {
//     int temperature_in_celsius;
//     scanf("%d", &temperature_in_celsius);

//     if (temperature_in_celsius > 30)
//     {
//         printf("Hot\n");
//     }
//     else if (temperature_in_celsius >= 20 && temperature_in_celsius <= 30)
//     {
//         printf("Normal\n");
//     }
//     else
//     {
//         printf("Cold\n");
//     }
//     return 0;
// }

// Question:02

#include <stdio.h>
int main()
{
    float purches_amount;
    scanf("%f", &purches_amount);

    float discount, final_amount;

    if (purches_amount >= 5000)
    {
        discount = purches_amount * 0.1;
        final_amount = purches_amount - discount;
        printf("%.0f", final_amount);
    }
    else if (purches_amount >= 2000 && purches_amount <= 4999)
    {
        discount = purches_amount * 0.05;
        final_amount = purches_amount - discount;
        printf("%.0f", final_amount);
    }

    else
    {
        discount = 0;
        final_amount = purches_amount - discount;
        printf("%.0f", final_amount);
    }
    return 0;
}