#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ; // parte pesquisada pois não sabia como limpava buffer, e precisava :/
}

void checkProb() {
  int random = rand() % 700;
  char abrir;

  if (random < 100) { // caso 2 e 6 são especiais de volta
    case3();
  } else if (random < 200) {
    case4();
  } else if (random < 300) {
    case5();
  } else if (random < 400) {
    case7();
  } else if (random < 500) {
    case8();
  } else if (random < 600) {
    case9();
  } else if (random < 700) {
    case10();
  }
}

void chestProb() {
  printf("chestProb executado!\n");
  char guardar;
  int random = rand() % 886;
  if (random < 43) { // origami
    if (gotten[0] == 0) {
      gotten[0] = 1;
      origami();

      printf("Você encontrou um origami. Deseja guardá-lo? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == 'S' || guardar == 's') {
        printf("O origami parece ter sido cuidadosamente projetado. Você se "
               "pergunta quem o fez. Você começa a pensar que talvez há outros "
               "por esse labirinto.\n");
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou o origami. O engenhoso objeto ficou agora "
               "para o esquecimento. Ou será que não?\n");
        stage();
      }
    } else {

      chestProb();
    }
  } else if (random < 86) { // ursinho
    if (gotten[1] == 0) {
      gotten[1] = 1;
      ursinho();

      printf("Você encontrou um ursinho. Deseja guardá-lo? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("O ursinho parece um pouco desgastado. Você se pergunta de quem "
               "era tal brinquedo. Sua nostalgia aumenta. Você se lembra de "
               "algo, no fundo.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf(
            "Você dispensou o ursinho. O objeto ficou para o esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }
  } else if (random < 148) { // astronauta
    if (gotten[2] == 0) {
      gotten[2] = 1;
      astronauta();

      printf("Você encontrou uma foto. Nela, astronautas põem seus pés sobre a "
             "lua pela primeira vez na história. Você se pergunta onde está a "
             "lua. Você se pergunta se consegue chegar até lá também.\n");
      nostalgia++;
      stage();
    } else {

      chestProb();
    }

  } else if (random < 256) { // camera
    if (gotten[3] == 0) {
      gotten[3] = 1;
      camera();

      printf("Você encontrou uma câmera. Deseja guardá-la? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("Alguns momentos não puderam ser capturados no tempo. Alguns "
               "outros foram registrados. No final, apenas essas imagens "
               "restaram.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf(
            "Você não guardou a câmera. O objeto ficou para o esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else if (random < 345) { // medal
    if (gotten[4] == 0) {
      gotten[4] = 1;
      medal();

      printf("Você encontrou uma medalha. Deseja guardá-la? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("A medalha brilha com um brilho antigo. Você se pergunta quem a "
               "mereceu. Você se pergunta se você a merece.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou a medalha. O objeto ficou para o "
               "esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else if (random < 440) { // guitar

    if (gotten[5] == 0) {
      gotten[5] = 1;
      guitar();

      printf("Você encontrou um violão. Deseja guardá-lo? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf(
            "Você toca uma nota. O violão responde com um som suave. A madeira "
            "tem cheiro de mofo, da mais natural forma de solidão.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf(
            "Você não guardou o violão. O objeto ficou para o esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else if (random < 537) { // light bulb

    if (gotten[6] == 0) {
      gotten[6] = 1;
      light();

      printf("Você encontrou uma lâmpada quebrada. Deseja guardá-la? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("Parece ter iluminado os períodos de escuridão. Parece ter "
               "deixado claro o caminho para os que estavam perdidos.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou lâmpada quebrada. O objeto ficou para o "
               "esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else if (random < 669) { // knight

    if (gotten[7] == 0) {
      gotten[7] = 1;
      knight();

      printf("Você encontrou uma peça de xadrez. Deseja guardá-la? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("Afinal, para que uma batalha? O seu ego interno parece ter "
               "diminuido. A peça é sem sentido sem uma luta. Você se sente "
               "determinado a achar um propósito.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou a peça de xadrez. O objeto ficou para o "
               "esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else if (random < 730) { // car
    if (gotten[8] == 0) {
      gotten[8] = 1;
      car();

      printf(
          "Você encontrou um carrinho de brinquedo. Deseja guardá-lo? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf(
            "Alguém parece ter brincado muito com isso. Você se pergunta o "
            "porquê o deixaram. Você se pergunta se realmente o deixaram. Sua "
            "nostalgia aumenta à medida que você brinca com o carrinho.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou o carrinho de brinquedo. O objeto ficou para "
               "o esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }

  } else {
    if (gotten[9] == 0) { // star
      gotten[9] = 1;
      star();

      printf("Você encontrou uma estrela. Deseja guardá-la? (S/n)\n");
      scanf(" %c", &guardar);
      limparBuffer();
      if (guardar == '\n') {
        guardar = 'S';
      }
      if (guardar == 'S' || guardar == 's') {
        printf("A estrela brilha com um brilho antigo. Você se pergunta se ela "
               "ainda brilha, ou se já desapareceu. Você se pergunta se o "
               "brilho é o passado. Você se pergunta se você ainda brilha.\n");
        nostalgia++;
        stage();
      } else if (guardar == 'N' || guardar == 'n') {
        printf("Você não guardou a estrela. O objeto ficou para o "
               "esquecimento.\n");
        stage();
      }
    } else {

      chestProb();
    }
  }
}