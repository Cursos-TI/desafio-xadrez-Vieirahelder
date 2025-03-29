#include <stdio.h>

//Criar os movimentos usando recursividade
//Helder Vieira Nascimento

    void moverTorre(int casas) { //declaracao da variavel
      if(casas > 0) { //declarar a condicao, torre tem que ser maior que zero para andar casas e menor que cinco
        printf("Torre anda para direita uma casa\n"); //saida a ser exibida
        moverTorre(casas - 1);

      }

    }


    void moverBispo(int casas) { //declarar a variavel
      if(casas > 0) {
        printf("Bispo anda para direita e cima uma casa\n");
        moverBispo(casas - 1);
      }

    }

    void moverRainha(int casas) { //declarar variavel
      if(casas > 0) {
        printf("Rainha anda uma casa para esquerda\n");
        moverRainha(casas - 1);
      }
    }



    int main() {

      printf("\n\n");
      moverTorre(5);

      printf("\n\n");
      moverBispo(5);

      printf("\n\n");
      moverRainha(8);

      printf("\n\n");
      int cavalo = 1; // variavel

      while(cavalo--)
      { printf("Cavalo anda\n");
        for (int i = 0; i < 2; i++)
        {
          printf("Cima\n "); //vai imprimir cima duas vezes
        }
        printf("Direita\n"); //vai imprimir uma vez
      }



      return 0;
    }