#include <stdio.h>

int vetoresIguais(int v1[], int v2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (v1[i] != v2[i])
            return 0;
    }
    return 1;
}


int main(){

   

  int vetor1[] = {1, 2, 3};
    int vetor2[] = {1,2 , 3};

    
        printf("%d\n",vetoresIguais(vetor1, vetor2, 3));


    return 0;
}





