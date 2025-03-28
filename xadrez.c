#include <stdio.h>

//desafio HELDER VIEIRA NASCIMENTO

int main() {
    printf("Simulacao do movimento das pecas de xadrez:\n\n");

    // Torre - movimento horizontal para a direita (usando for)
    printf("Torre movendo 5 casas para a direita:\n");

    //para o for
    //inicializacao, condicao e incremento
    //a torre tem que ser pelo menos 1 casa, a condicao é andar 5 casas
        for (int torre = 1; torre <= 5; torre++) {
        printf("Casa %d: Direita\n", torre);
         }



    // Bispo - movimento diagonal para cima e direita (usando while)
        printf("\nBispo movendo 5 casas na diagonal (cima e direita):\n");
    //WHILE (CONDICAO) { //CODIGO }
        int casa_bispo = 1; //declarando a variavel
        while (casa_bispo <= 5) //a condicao é que ande apenas 5 casas
        {
            printf("Casa %d: Cima, Direita\n", casa_bispo);
            casa_bispo++; //o incremento
        }


    // Rainha - movimento horizontal para a esquerda (usando do-while)
        printf("\nRainha movendo 8 casas para a esquerda:\n");
    //  CODIGO } WHILE (CONDICAO) CONDICAO É BOOLEANA
        int casa_rainha = 1; //declarando a variavel
        do {
        printf("Casa %d: Esquerda\n", casa_rainha);
        casa_rainha++; //incremento
        } while (casa_rainha <= 8); //declarando a condicao 8 casas





    return 0;
}