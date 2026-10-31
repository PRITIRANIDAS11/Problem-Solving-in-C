#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter Dimention\n");
    scanf("%d %d", &m, &n);
    int A[m][n];

    printf("Enter Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = A[i][j] + sum;
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
