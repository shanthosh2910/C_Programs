// A number is said to be twisted prime if it is a prime number and reverse of the number is also a prime number.

#include <stdio.h>
#include <math.h>
int isPrime(int number)
{
    if (number == 2)
        return 1;
    else if (number % 2 == 0)
        return 0;
    for (int iterate = 3; iterate < sqrt(number); iterate += 2)
        if (number % iterate == 0)
            return 0;
    return 1;
}

int reversed(int number)
{
    int reverse = 0, digit;
    while (number > 0)
    {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number /= 10;
    }
    return reverse;
}

int main()
{
    int number = 79, reverse;
    reverse = reversed(number);
    if (isPrime(number) && isPrime(reverse))
        printf("Yes");
    else
        printf("No");
}