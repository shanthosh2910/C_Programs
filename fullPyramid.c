//    *   
//   ***
//  *****
// *******

#include <stdio.h>
int main()
{
    int space, print, traverse, rows, star = 0;
    scanf("%d", &rows);
    for (traverse = rows; traverse-- > 0; star += 2, printf("\n"))
    {
        for (space = 0; space++ < traverse; printf(" "))
            ;
        for (print = 0; print++ <= star; printf("*"))
            ;
    }
}