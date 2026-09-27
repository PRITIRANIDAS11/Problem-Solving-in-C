#include <stdio.h>
int main()
{
    int i = 1, j = 0, k = 0;

    if (i++ || j++ || k++)
    {
        printf("true\n"); /*i++ gives 1 (true) ____shortcircuit___j++ and k++ never run*/
        /*Output: true, then 2 0 0 */
    }
    else
    {
        printf("false\n");
    }

    printf("%d %d %d", i, j, k);

    return 0;
}