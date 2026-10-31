
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the dimantion : ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    int b[m][n];

    int i, j;

    printf("Enter Matrix a :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix b\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int sum[m][n];
    printf("sum of matrix a and matrix b \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The new Matrix is :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
