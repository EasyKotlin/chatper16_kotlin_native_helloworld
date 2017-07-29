#include "cn_kotlinor.h"
#include <stdio.h>

void printHello(){
    printf("[C]HelloWorld\n");
}

int factorial(int n){
    printf("[C]calc factorial: %d\n", n);
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

int fib(int n){
    printf("[C]calc fibonacci: %d\n", n);
    if(n==1||n==2) return 1;
    return fib(n-1) + fib(n-2);
}

