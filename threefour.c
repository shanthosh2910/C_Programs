// print the nth term of 3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 443, 444, 3333, 3334, 3343, 3344 .....

#include <stdio.h>

int threeFour(int term)
{
    if (term == 0)
        return 3;
    if (term == 1)
        return 4;
    if (term % 2 == 0)
        return threeFour((term / 2) - 1) * 10 + 3;
    else
        return threeFour((term / 2) - 1) * 10 + 4;
}

int main()
{
    printf("%d", threeFour(25));
}
