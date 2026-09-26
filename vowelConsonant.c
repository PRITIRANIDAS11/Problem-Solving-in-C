// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Pleace enter ALPHABATE :");
//     scanf("%c", &ch);

//     if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//     {
//         printf("VOWEL\n");
//     }
//     else
//     {
//         printf("CONSONANT\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char ch;
    printf("Pleace enter ALPHABATE :");
    scanf("%c", &ch);

    (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("VOWEL\n");
    }
    else
    {
        printf("CONSONANT\n");
    }

    return 0;
}

// OR,........................................................................................

#include <stdio.h>
int main()
{
    char ch;
    printf("Pleace enter ALPHABATE :");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("VOWEL\n");
    }
    else
    {
        printf("CONSONANT\n");
    }

    return 0;
}

// OR,

// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);

//     switch (ch)
//     {
//     case 'A':
//     case 'E':
//     case 'I':
//     case 'O':
//     case 'U':
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         printf("VOWEL\n");
//         break;
//     default:
//         printf("Consonant\n");
//         break;
//     }

//     return 0;
// }