#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(){

    int numero;

    printf("Digite um numero para ver se e primo: ");
    scanf("%d", &numero);
 

    if (ehPrimo(numero))
        printf("%d é primo\n", numero);
    else
        printf("%d não é primo\n", numero);

}




