#include <stdio.h>

void troca(int v[], int a, int b){
    int aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}

void inversor(int v[], int in, int fim){
    if (in < fim) {
        troca(v, in, fim);
        inversor(v, in+1, fim-1);
    }
}

void mostrar(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[6] = {1,5,2,7,6,4};
    int n = 6;
    mostrar(v, n);
    inversor(v, 0, 5);
    mostrar(v,n);
    return 0;
}