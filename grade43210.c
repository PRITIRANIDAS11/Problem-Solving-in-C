// #include <stdio.h>
// int main()
// {
//     int grade;
//     scanf("%d", &grade);

//     if (grade == 4)
//     {
//         printf("Excellent !\n");
//     }
//     else if (grade == 3)
//     {
//         printf("good !\n");
//     }
//     else if (grade == 2)
//     {
//         printf("poor!\n");
//     }
//     else
//     {
//         printf("please try again .\n");
//     }

//     return 0;
// }

// OR,

#include <stdio.h>
int main()
{
    int grade;
    scanf("%d", &grade);

    switch (grade)
    {
    case 4:
        printf("Excellent\n");
        break;
    case 3:
        printf("Good\n");
        break;
    case 2:
        printf("Average\n");
        break;
    case 1:
        printf("poor\n");
        break;
    default:
        printf("please try again .");
        break;
    }
    return 0;
}