#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("LY\n");
    }
    else if (year % 100 == 0)
    {
        printf("NLY\n");
    }
    else if (year % 4 == 0)
    {
        printf("LY\n");
    }
    else
    {
        printf("NLY\n");
    }

    return 0;
}