#include <stdio.h>

int main() {

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

    return 0;
}