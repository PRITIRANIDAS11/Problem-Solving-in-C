#include <stdio.h>
int main()
{
    int n, i = 0, sum = 0; // 5, -3, 8 , -1,

    while (i < 5)
    {
        /// 12,7,4
        scanf("%d", &n);

        if (n < 0)
            continue;
        sum += n;
        i++;
    }

    printf("%d", sum);
    return 0;
}