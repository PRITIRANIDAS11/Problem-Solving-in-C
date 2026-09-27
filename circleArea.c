#include <stdio.h>
int main()
{
    double pi = 3.1416;
    double radius;

    printf("pleace enter radius:");
    scanf("%lf", &radius);

    double Area = pi * radius * radius;

    printf("%.2lf", Area);

    return 0;
}