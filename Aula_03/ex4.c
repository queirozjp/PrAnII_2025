#include <stdio.h>

float power(int x, int n){
    if (n == 0) return 1;
    else return x * power(x, n-1);
}

float factorial(int n){
    if (n == 1) return 1;
    else return n * factorial(n-1);
}

float somatoria(int x, int n){
    if (n == 0) return 1;
    else return power(x,n)/factorial(n) + somatoria(x, n-1);
}

int main(){
    printf("somatoria 2 e 2: %.2f\n", somatoria(2,2));
    return 0;
}