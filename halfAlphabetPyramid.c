// A
// B C
// D E F
// G H I J

#include <stdio.h>
int main()
{
    int row, traverse, pattern;
    char alphabet = 'A';
    scanf("%d", &row);
    for (traverse = 0; traverse < row; traverse++, printf("\n"))
        for (pattern = 0; pattern <= traverse; pattern++, printf("%c ", alphabet++));
    return 0;
}