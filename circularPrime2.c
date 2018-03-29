
#include <stdio.h>
int isprime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int circle(int y, int x)
{
    int c, i = 0;
    c = y % 10;
    y = y / 10;
    y = y + (c * x);
    return y;
}
int val(int x)
{
    int i = 0, r = 1;
    while (i < x)
    {
        r = r * 10;
        i++;
    }
    return r;
}
int main()
{
    int n1, n2, i, a, b, j, f, k, l, r, t[100];
    scanf("%d%d", &n1, &n2);
    if (n1 == 1)
    {
        n1 = n1 + 1;
    }
    for (i = n1; i <= n2; i++)
    {
        int c = 0;
        a = isprime(i);
        if (a == 1)
        {
            b = i;
            while (b > 0)
            {
                b = b / 10;
                c = c + 1;
            }
            f = val(c - 1);
            k = circle(i, f);
            for (j = 0; j < c; j++)
            {
                l = isprime(k);
                if (l == 0)
                {
                    break;
                }
                k = circle(k, f);
            }
            if (j >= c)
            {
                t[r++] = i;
            }
        }
    }
    for (int z = 0; z < r; z++)
    {
        printf("%d ", t[z]);
    }

    return 0;
}