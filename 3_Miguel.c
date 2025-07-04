#include <stdio.h>

void exibirMensagem(int vezes){
    for (int i = 0; i < vezes; i++) {
        printf("Essa é a mensagem padrão!\n");
    }
}

int main(){

    int palavra;

    printf("Digite uma palavra:");
    scanf("%d", &palavra);

    exibirMensagem(palavra);

}

 