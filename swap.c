// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter value of a and b : ");
//     scanf("%d %d", &a, &b);

//     // a=40,b=20

//     a = a + b; // a = 40 + 20 = 60
//     b = a - b; // b = 60 - 20 = 40;
//     a = a - b; // a = 60 - 40 = 20;

//     printf("a = %d , b = %d", a, b);

//     return 0;
// }

// OR,
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter value of a and b : ");
    scanf("%d %d", &a, &b);

    // a = 7 ; b = 5

    a = a ^ b; // a = 7^5 = 111 +101 = 010
    b = a ^ b; // b = 010 + 101 = 111 = 7;
    a = a ^ b; // a = 010 + 111 = 101 = 5;

    printf("a = %d, b = %d ", a, b);
    return 0;
}