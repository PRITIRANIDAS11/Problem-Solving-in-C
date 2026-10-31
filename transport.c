#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter Dimention\n");
    scanf("%d %d",&m,&n);
    int A[m][n];

    printf("Enter Matrix\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Transport matrix :");
     for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
    return 0 ;
}
