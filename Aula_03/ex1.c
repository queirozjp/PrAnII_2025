#include <stdio.h>

int mult(int a, int b){
    if (b==1) return a;
    else return mult(a,b-1)+a;
}

int main (){
    printf("2x10 = %d\n", mult(2,10));
    return 0;
}