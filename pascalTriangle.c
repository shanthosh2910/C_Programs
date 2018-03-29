//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

#include <stdio.h>
int main()
{
    int rowsInput, space, rows, columns, number;
    scanf("%d", &rowsInput);
    for (rows = 0; rows < rowsInput; rows++, printf("\n"))
    {
        for (space = rows; space < rowsInput; space++, printf(" "))
            ;
        for (columns = 0; columns <= rows; columns++)
        {
            number = rows == 0 || columns == 0 ? number = 1 : number * (rows - columns + 1) / columns;
            printf("%d ", number);
        }
    }
}