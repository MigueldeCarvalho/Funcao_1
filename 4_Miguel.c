#include <stdio.h>

int multiplicar(int a, int b) {
    return a * b;
}

int main(){

     int a, b;

    printf("Digite um numero:");
    scanf("%d %d", &a, &b);



    int resultado = multiplicar(a, b);
    printf("Resultado da multiplicação: %d\n", resultado);

}

