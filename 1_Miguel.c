#include <stdio.h>

void verificaParImpar(int num) {
    if (num % 2 == 0)
        printf("Par\n");
    else
        printf("Ímpar\n");
}

int main() {
    int numero;

    printf("Digite um numero para ver se eh impar ou par: ");
    scanf("%d", &numero);
    verificaParImpar(numero);

    return 0;
}

  
