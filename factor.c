#include <stdio.h>
main()
{
    int n, i, r;
    printf("\n n:");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        r = n % i;
        if (r == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
