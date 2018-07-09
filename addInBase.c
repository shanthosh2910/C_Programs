// Add 2 numbers in given Base
// input:
// 123  13 4
// output:
// 202

#include <stdio.h>

int power(int base, int exponent)
{
    int pow = 1;
    for (int i = 0; i < exponent; i++)
        pow *= base;
    return pow;
}

int main()
{
    int number1, number2, base, sum, digitSum, carry, exponent;
    sum = digitSum = carry = exponent = 0;
    scanf("%d%d%d", &number1, &number2, &base);
    while (number1 || number2)
    {
        digitSum = number1 % 10 + number2 % 10 + carry;
        if (digitSum >= base)
        {
            sum = (digitSum - base) * power(10, exponent) + sum;
            carry = 1;
        }
        else
        {
            sum = digitSum * power(10, exponent) + sum;
            carry = 0;
        }
        number1 /= 10;
        number2 /= 10;
        exponent++;
    }
    if (carry)
        sum = carry * power(10,exponent) + sum;
    printf("%d", sum);
    return 0;
}
