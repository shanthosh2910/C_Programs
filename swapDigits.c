// Write a 'C' program to swap the alternate digits of the given number
// input 54687
// output 45867

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char val[9],re[9],tem;
    int i = 0,len= 0,res;
    scanf("%s",val);
    len = strlen(val)- 2;
    while(i <= len){
        tem = val[i+1];
        val[i+1] = val[i];
        val[i] = tem;
        i = i + 2;
    }
    res = atoi(val);
    printf("%d",res);
    return 0;
}