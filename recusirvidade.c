#include <stdio.h>
 
// Definição de procedimento para imprimir uma mensagem
void moverBispo (int bispo) {
    if (bispo > 0)
    printf("Movendo diagonalmente para cima e a direita \n");
    moverBispo (bispo - 1);
}

void moverTorre (int casas) {
    if (casas > 0)
    printf("Movendo para direita \n");
    moverTorre(casas - 1);
}

void moverRainha (int casas) {
    if (casas > 0)
    printf("Movendo na horizontal para esquerda \n");
    moverRainha(casas - 1);
}
int main() {
    int carta;
    
    printf("******* XADREZ ******* \n");
    printf("1. Mover Bispo \n");
    printf("2. Mover Torre \n");
    printf("3. Mover Rainha \n");
    printf("DIGITE A CARTA QUE VOÇE DESEJA MOVER: ");
    scanf("%d", &carta);
    
    switch (carta)
    {
    case 1:
        moverBispo(5);
        break;
    case 2:
        moverTorre(5);
        break;
    case 3:
        moverRainha(8);
        break;
    default:
        printf("Opção inválida !!!");
        break;
    }
    
    return 0;
}