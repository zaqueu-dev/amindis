#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include "utils.h"  


void checkProb(){
  int random = rand() % 1000;
  switch(random){
    case 111:
      printf("Você encontrou um monstro. Game Over.\n");
      break;
    case 222: 
      printf("Você encontrou um baú raro. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == "\n"){
        abrir = 'S';
      }
      if(abrir == 'S' || abrir == 's'){
        chestProb();
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Esquerda ou direita? (E/d)\n");
        char escolha;
        scanf(" %c", &escolha);
        stage();
      }
      break;
    case 333:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
      break;
    case 444:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
      break;
    case 555:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a sssaída. Game Over.\n");
      }
      break;
    case 666:
      printf("Você encontrou uma foto. Uma nostalgia invade o seu ser. Você está preso ali, olhando para o passado, eternamente.\n");
      printf("Game Over.\n");
      break;
    case 777:
      printf("Você encontrou um artefato mágico. Deseja tocá-lo? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
      break;
    case 888: 
      printf("Você encontrou um baú raro. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
      break;
    case 999:
      printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
      break;
    default:
      if(random % 2 == 0){
        printf("Você encontrou um monstro. Game Over.\n");
      }else{
        printf("Você encontrou um baú comum. Deseja abrir? (S/n)\n");
        char abrir;
        scanf(" %c", &abrir);
        if(abrir == 'S' || abrir == 's'){
          printf("Você encontrou a saída! Parabéns!\n");
        }else if(abrir == 'N' || abrir == 'n'){
          printf("Você não encontrou a saída. Game Over.\n");
        }
      }
      break;
  }
}

void chestProb(){
    int random = rand() % 1000;
    if(random < 43){
        
        origami();

        printf("Você encontrou um origami. Deseja guardá-lo? (S/n)\n");
        char guardar;
        scanf(" %c", &guardar);
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
        char guardar;
        scanf(" %c", &guardar);
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
        char guardar;
        scanf(" %c", &guardar);
        if(guardar == 'S' || guardar == 's'){
            printf("Alguns momentos não puderam ser capturados no tempo. Alguns outros foram registrados. No final, apenas essas imagens restaram.\n");
            nostalgia++;
            stage();
        }else if(guardar == 'N' || guardar == 'n'){
            printf("Você não guardou a câmera. O objeto ficou para o esquecimento.\n");
            stage();
        }

    }
}