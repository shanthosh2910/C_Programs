// print the pattern
// 543212345
// 5432 2345
// 543   345
// 54     45
// 5       5
// 54     45
// 543   345
// 5432 2345
// 543212345

#include <stdio.h>
main()
{
    int c, b, i, j, k = 1, n, t;
    printf("Enter the number of rows");
    scanf("%d", &n);

    b = n;
    while (k < n)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = n; j >= i; j--)
                printf("%d", j);
            for (j = 1; j < ((2 * i) - 2); j++)
                printf(" ");
            for (j = i; j <= n; j++)
            {
                if (j != 1)
                    printf("%d", j);
            }
            printf("\n");
            k++;
        }

        for (i = 2; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
                printf("%d", (n - (j - 1)));
            c = 3;
            for (j = n + (b - c); j >= ((2 * i) - 1); j--)
                printf(" ");
            for (j = 1; j <= i; j++)
            {
                t = n - (i - j);
                if (t != 1)
                    printf("%d", t);
            }
            printf("\n");
            k++;
        }
    }
}
