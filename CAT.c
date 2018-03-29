// program to check the following condition. CAT = (C+A+T)* (C*A*T) where as each letter is a digit

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int CAT = 135, M, num;
    int C, A, T;
    num = CAT;
    T = CAT % 10;
    CAT = CAT / 10;
    A = CAT % 10;
    CAT = CAT / 10;
    C = CAT % 10;
    M = (C + A + T) * (C * A * T);
    printf("%d = (%d+%d+%d)*(%d*%d*%d)", M, C, A, T, C, A, T);
    return 0;
}