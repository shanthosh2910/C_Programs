// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    int rowsInput, rows, columns, space;
    scanf("%d", &rowsInput);
    for (rows = 0; rows < rowsInput; rows++, printf("\n"))
        for (columns = 0; columns <= rows; columns++, printf("*"))
            ;
    for (rows = 1; rows < rowsInput; rows++, printf("\n"))
        for (columns = rows; columns < rowsInput; columns++, printf("*"))
            ;
}