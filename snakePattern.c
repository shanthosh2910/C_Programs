// print a snake pattern
// input : 4
// output :
//    1234
//   8765
//  9101112
// 16151413

#include <stdio.h>
int main()
{
    int number, space, traverse, input, start = 1, odd = 1;
    scanf("%d", &input);
    for (traverse = input; traverse > 0; traverse--, printf("\n"))
    {
        for (space = traverse; space > 0; printf(" "), space--);
        for (number = 0; number < input; number++)
        {
            if (odd)
                printf("%d", start++);
            else
                printf("%d", start--);
        }
        if (odd)
        {
            odd = 0;
            start += input - 1;
        }
        else
        {
            odd = 1;
            start += input + 1;
        }
    }
}