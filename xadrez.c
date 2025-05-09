#include <stdio.h>

void moverTorre (int casas) {
    if (casas > 0)
    printf("Direita \n");
    moverTorre(casas - 1);
}

int main() {

    moverTorre(5);

    printf("Movimento da Torre: \n");

    for (int i = 1; i <= 5; i++) {
        printf("Movendo para direita %d casa(s)\n", i);
    }
    
    printf("\n Movimento do Bispo: \n");
    int i = 1;
    while (i <= 5) {
        printf("Movendo diagonalmente para cima e a direita %d casa(s)\n", i);
        i++;
    }
    printf("\n Movimento da Rainha: \n");
    int a = 1;
    do {
        printf("Movendo na horizontal para esquerda %d casa(s)\n", a);
        a++;
    } while (a <= 8);

    int movimentocompleto = 1;
    while (movimentocompleto --)
    {
      for (int i = 0 ; i < 2; i++) {
        printf("cima \n");
    }  /* code */
    printf("diereita \n");
    }
    
    
    

    return 0;
}