#include <stdio.h>

int somaImpares(int n){
    if (n == 1) return 1;
    else return (2*n-1) + somaImpares(n - 1);
}

int main(){
    printf("Soma 1+3+5+7+9: %d\n", somaImpares(5));
    return 0;
}