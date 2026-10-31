
#include<stdio.h>
int main()
{
    int A[3] [3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    int sum=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum = A[i][j] + sum ;
        }
    }

    printf("%d\n",sum);
    return 0 ;
}
