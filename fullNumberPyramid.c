//     1
//    232
//   34543
//  4567654
// 567898765

#include <stdio.h>
int main()
{
    int rows, increment, number = 0, traverse, space;
    scanf("%d", &rows);
    for (traverse = 1; traverse++ <= rows; printf("\n"))
    {
        for (space = rows; space-- >= traverse; printf(" "))
            ;
        for (increment = 0; increment++ <= space; printf("%d", ++number))
            ;
        for (; --increment > 1; printf("%d", --number))
            ;
    }
}