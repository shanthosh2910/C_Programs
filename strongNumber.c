//  Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number.
//  n = 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main() {
    int num,sum=0,n,init;
    scanf("%d",&num);
    init = num;
    while( num > 0 ){
        n = num%10;
        sum += fact(n);
        num = num/10;
    }
    if(init == sum)
        printf("STRONG");
    else
        printf("NOT STRONG");
    return 0;
}