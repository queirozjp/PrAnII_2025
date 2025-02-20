#include <stdio.h>

int power(int x, int n){
    if (n == 0) return 1;
    else return x * power(x, n-1);
}

int main(){
    printf("5 ^ 5: %d\n", power(5,5));
}