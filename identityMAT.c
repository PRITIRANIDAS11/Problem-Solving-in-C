
#include <stdio.h>
int main()
{
    int flag = 1;

    int N;
    printf("Enter the dimantion of the matrix :");
    scanf("%d", &N);

    printf("enter matrix :");

    int A[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && A[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && A[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("Not an Identity Matrix\n");
    }
    else
    {
        printf("Identity Matrix \n");
    }

    return 0;
}
