// Rows = 3, Columns = 3
// 1 2 3
// 4 5 6 
// 7 8 9
// print the sum of the upper triangle....26

#include <stdio.h>
main()
{
    int rows, columns, i, j, s = 0;
    scanf("Rows......%d", &rows);
    scanf("Columns.......%d", &columns);
    int a[rows][columns];
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < rows; i++)
        for (j = i; j < columns; j++)
        {
            s += a[i][j];
        }
    printf("\n %d", s);
}
