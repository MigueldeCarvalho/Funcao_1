#include <stdio.h>

void mostraMaior(int a, int b) {
    if (a > b)
        printf("Maior número: %d\n", a);
    else
        printf("Maior número: %d\n", b);
}

int main(){

    int a, b;

    printf("Digite um numero:");
    scanf("%d %d", &a, &b);

    mostraMaior(a, b);

}


 