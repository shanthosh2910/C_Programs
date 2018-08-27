#include <stdio.h>
#include <stdlib.h>
int n, a[100][100], i, j, visit[100], x;

void DFS(int x)
{
    visit[x] = 1;
    printf("%d", x);
    for (i = 0; i < n; i++)
    {
        if (a[x][i] == 1 && visit[i] == 0)
            DFS(i);
    }
}

main()
{

    printf("Number of nodes is:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
        visit[i] = 0;
    DFS(0);
}
