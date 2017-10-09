#include <stdio.h>

int sum1(int a, int b){
    return a+b;
}

int __attribute__((stdcall)) sum2(int a, int b){
    return a+b;
}

int __attribute__((fastcall)) sum3(int a, int b){
    return a+b;
}

int  main(int argc, char *argv[]){
    int a = 2;
    int b = 3;

    return sum1(a,b);
}

