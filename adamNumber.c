// Adam number is a number when reversed, the square of the number and the square of the reversed number should be numbers which are reverse of each other.
// Square of 12 = 144
// Reverse of 12 = 21
// Square of 21 = 441

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int reverse(long int n)
{
    long int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + n % 10;
        n = n / 10;
    }
    return reverse;
}
int main()
{

    long int number, sqr, rnum, rsqr = 0;
    scanf("%ld", &number);
    sqr = number * number;
    rnum = reverse(number);
    rsqr = reverse(sqr);
    if ((rnum * rnum) == rsqr)
    {
        printf("ADAM\n");
    }
    else
        printf("NOT ADAM\n");
    return 0;
}