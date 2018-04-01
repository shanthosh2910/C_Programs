//     *
//    *A*
//   *A*A*
//  *A*A*A*

#include <stdio.h>
int main()
{
    int rowsInput, columns, rows, space;
    scanf("%d", &rowsInput);
    for (rows = 0; rows < rowsInput; rows++, printf("\n"))
    {
        for (space = rows; space++ < rowsInput; printf(" "))
            ;
        for (columns = 0; columns <= rows + rows; columns++)
        {
            columns % 2 == 0 ? printf("*") : printf("A");
        }
    }
}