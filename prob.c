#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include "utils.h"  

typedef void (*lastCalled)();

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada
}

void checkProb(){
  int random = rand() % 1000;
  char abrir;

  switch(random){
    case 111:
      printf("Você encontrou um monstro. Game Over.\n");
      break;
    case 222: 
      printf("Você encontrou um baú raro. Deseja abrir? (S/n)\n");
      
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == '\n'){
        abrir = 'S';
      }
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 333:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 444:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 555:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 666:
      printf("Você encontrou uma foto. Uma nostalgia invade o seu ser. Você está preso ali, olhando para o passado, eternamente.\n");
      printf("Game Over.\n");
      break;
    case 777:
      printf("Você encontrou um artefato mágico. Deseja tocá-lo? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 888: 
      printf("Você encontrou um baú raro. Deseja abrir? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    case 999:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      scanf(" %c", &abrir);
      limparBuffer();
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
    default:
      if(random < 45){
        usleep(1000000);
        printf("Esquerda ou reto? (E/r)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 67){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else if(random < 89){
        usleep(1000000);
        printf("Reto ou direita? (R/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 113){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else if(random < 200){
        usleep(1000000);
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 300){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else if(random < 400){
        usleep(1000000);
        printf("Esquerda ou reto? (E/r)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 500){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else if(random < 600){
        usleep(1000000);
        printf("Reto ou direita? (R/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 700){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else if(random < 800){
        usleep(1000000);
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }else if(random < 900){
        printf("Você encontrou um baú. Deseja abrir? (S/n)\n");
        scanf(" %c", &abrir);
        limparBuffer();
        if(abrir == 'S' || abrir == 's'){
          chestProb();
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Esquerda ou direita? (E/d)\n");
          char escolha;
          scanf(" %c", &escolha);
          limparBuffer();
          stage();
        }
      }else{
        usleep(1000000);
        printf("Esquerda ou reto? (E/r)\n");
        char escolha;
        scanf(" %c", &escolha);
        limparBuffer();
        stage();
      }
      break;
  }
}

void chestProb(){
    char guardar;
    int random = rand() % 886;
    if(random < 43){
        
        origami();

        printf("Você encontrou um origami. Deseja guardá-lo? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == 'S' || guardar == 's'){
            printf("O origami parece ter sido cuidadosamente projetado. Você se pergunta quem o fez. Você começa a pensar que talvez há outros por esse labirinto.\n");
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou o origami. O engenhoso objeto ficou agora para o esquecimento. Ou será que não?\n");
            stage();
        }
    }else if(random < 86){

        ursinho();

        printf("Você encontrou um ursinho. Deseja guardá-lo? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("O ursinho parece um pouco desgastado. Você se pergunta de quem era tal brinquedo. Sua nostalgia aumenta. Você se lembra de algo, no fundo.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você dispensou o ursinho. O objeto ficou para o esquecimento.\n");
            stage();
        }
    }else if(random < 148){
        
        astronauta();

        printf("Você encontrou uma foto. Nela, astronautas põem seus pés sobre a lua pela primeira vez na história. Você se pergunta onde está a lua. Você se pergunta se consegue chegar até lá também.\n");
        nostalgia++;
        stage();
    }else if(random < 256){

        camera();

        printf("Você encontrou uma câmera. Deseja guardá-la? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("Alguns momentos não puderam ser capturados no tempo. Alguns outros foram registrados. No final, apenas essas imagens restaram.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou a câmera. O objeto ficou para o esquecimento.\n");
            stage();
        }

    }else if(random < 345){
        
        medal();

        printf("Você encontrou uma medalha. Deseja guardá-la? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("A medalha brilha com um brilho antigo. Você se pergunta quem a mereceu. Você se pergunta se você a merece.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou a medalha. O objeto ficou para o esquecimento.\n");
            stage();
        }
    } else if(random < 440){
        
        guitar();

        printf("Você encontrou um violão. Deseja guardá-lo? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("Você toca uma nota. O violão responde com um som suave. A madeira tem cheiro de mofo, da mais natural forma de solidão.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou o violão. O objeto ficou para o esquecimento.\n");
            stage();
        }
    }else if(random < 537){

        light();

        printf("Você encontrou uma lâmpada quebrada. Deseja guardá-la? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("Parece ter iluminado os períodos de escuridão. Parece ter deixado claro o caminho para os que estavam perdidos.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou lâmpada quebrada. O objeto ficou para o esquecimento.\n");
            stage();
        }
    }else if (random < 669){

        knight();

        printf("Você encontrou uma peça de xadrez. Deseja guardá-la? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("Afinal, para que uma batalha? O seu ego interno parece ter diminuido. A peça é sem sentido sem uma luta. Você se sente determinado a achar um propósito.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou a peça de xadrez. O objeto ficou para o esquecimento.\n");
            stage();
        }
    }else if (random < 730){
        
        car();

        printf("Você encontrou um carrinho de brinquedo. Deseja guardá-lo? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("Alguém parece ter brincado muito com isso. Você se pergunta o porquê o deixaram. Você se pergunta se realmente o deixaram. Sua nostalgia aumenta à medida que você brinca com o carrinho.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou o carrinho de brinquedo. O objeto ficou para o esquecimento.\n");
            stage();
        }
    }else{

        star();

        printf("Você encontrou uma estrela. Deseja guardá-la? (S/n)\n");
        scanf(" %c", &guardar);
        limparBuffer();
        if(guardar == '\n'){
            guardar = 'S';
        }
        if(guardar == 'S' || guardar == 's'){
            printf("A estrela brilha com um brilho antigo. Você se pergunta se ela ainda brilha, ou se já desapareceu. Você se pergunta se o brilho é o passado. Você se pergunta se você ainda brilha.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou a estrela. O objeto ficou para o esquecimento.\n");
            stage();
        }

    }
}