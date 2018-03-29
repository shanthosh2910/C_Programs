// Write a 'C' program to find the largest prime factor of a number

#include <stdio.h>
int number; // declaring global variable reserve space in heap
int main()
{
    printf("Enter a number to know its largest prime factor: ");
    scanf("%d",&number);
    int div=2, ans = 0, maxFact;
    while(number!=0){
        if(number % div !=0)
            div = div + 1;
        else{
            maxFact  = number;
            number = number / div;

            if(number == 1){
                printf("%d is the largest prime factor !",maxFact);
                ans = 1;
                break;
            }
        }
    }
    return 0;
}