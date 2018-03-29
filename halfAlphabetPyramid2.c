// A
// B B
// C C C
// D D D D

#include <stdio.h>
int main()
{
    int row, traverse, pattern;
    char alphabet = 'A';
    scanf("%d", &row);
    for (traverse = 0; traverse < row; traverse++, printf("\n"), alphabet++)
        for (pattern = 0; pattern <= traverse; pattern++, printf("%c ", alphabet));
    return 0;
}