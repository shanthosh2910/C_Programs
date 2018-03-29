// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
int main()
{
    int rowsInput, rows, columns, number = 1;
    scanf("%d", &rowsInput);
    for (rows = 0; rows < rowsInput; rows++, printf("\n"))
        for (columns = 0; columns <= rows; printf("%d ", number++), columns++)
            ;
}