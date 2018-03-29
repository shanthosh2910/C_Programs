#include <stdio.h>
void dijistra(int n, int v, int c[100][100], int dv[100])
{
    int known[100], u, w, co, i;
    known[v] = 1;
    for (i = 2; i <= n; i++)
    {
        known[i] = 0;
        dv[i] = c[1][i];
    }
    co = 1;
    while (co <= n)
    {
        w = min(dv, n, known);
        known[w] = 1;
        co++;
        for (i = 2; i <= n; i++)
        {
            if (dv[w] + c[w][i] < dv[i] && !known[i])
                dv[i] = dv[i] < dv[w] + c[w][i] ? dv[i] : dv[w] + c[w][i];
        }
    }
    printf("\n Shortest path:\n");

    for (i = 2; i <= n; i++)
    {
        printf("%d->%d,cost=%d\n", v, i, dv[i]);
    }
}
int min(int a[], int n, int known[100])
{
    int i, min = 999, x = 15;

    for (i = 2; i <= n; i++)
    {
        if (!known[i])
        {
            if (a[i] < min)
            {
                min = a[i];
                x = i;
            }
        }
    }
    return x;
}
int main()
{
    int n, c[100][100], i, j, v, dv[100];
    printf("The number of nodes is:");
    scanf("%d", &n);
    printf("\n Enter the cost matrix:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    v = 1;
    dijistra(n, v, c, dv);
    return 0;
}
