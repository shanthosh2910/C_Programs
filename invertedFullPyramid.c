// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int traverse, rows, space, star;
    scanf("%d", &rows);
    for (traverse = rows; traverse > 0; printf("\n"), traverse--)
    {
        for (space = traverse; space++ < rows; printf(" "))
            ;
        for (star = 0; star++ < traverse + traverse - 1; printf("*"))
            ;
    }
}