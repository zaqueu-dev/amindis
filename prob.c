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
  int random = rand() % 600;
  char abrir;

  if (random < 100) { // caso 2 e 6 são especiais de volta
    case3();
  } else if (random < 200) {
    case4();
  } else if (random < 280) {
    case5();
  } else if (random < 420) {
    case7();
  } else if (random < 470) {
    case8();
  } else if (random < 540) {
    case9();
  } else if (random < 600) {
    case10();
  }
}

void chestProb() {
  char guardar;
  int random = rand() % 886;
  int baitRandom = rand() % 101;

  // Lógica para encontrar itens
  if (random < 43 && gotten[0] == 0) { // origami
    gotten[0] = 1;
    origami();
    printf(
        "\x1b[32mVocê encontrou um origami. Deseja guardá-lo? (S/n)\x1b[0m\n");
  } else if (random < 86 && gotten[1] == 0) { // ursinho
    gotten[1] = 1;
    ursinho();
    printf(
        "\x1b[32mVocê encontrou um ursinho. Deseja guardá-lo? (S/n)\x1b[0m\n");
  } else if (random < 148 && gotten[2] == 0) { // astronauta
    gotten[2] = 1;
    astronauta();
    printf("\x1b[32mVocê encontrou uma foto de astronautas. Deseja guardá-la? "
           "(S/n)\x1b[0m\n");
  } else if (random < 256 && gotten[3] == 0) { // camera
    gotten[3] = 1;
    camera();
    printf(
        "\x1b[32mVocê encontrou uma câmera. Deseja guardá-la? (S/n)\x1b[0m\n");
  } else if (random < 345 && gotten[4] == 0) { // medal
    gotten[4] = 1;
    medal();
    printf(
        "\x1b[32mVocê encontrou uma medalha. Deseja guardá-la? (S/n)\x1b[0m\n");
  } else if (random < 440 && gotten[5] == 0) { // guitar
    gotten[5] = 1;
    guitar();
    printf(
        "\x1b[32mVocê encontrou um violão. Deseja guardá-lo? (S/n)\x1b[0m\n");
  } else if (random < 537 && gotten[6] == 0) { // light bulb
    gotten[6] = 1;
    light();
    printf("\x1b[32mVocê encontrou uma lâmpada quebrada. Deseja guardá-la? "
           "(S/n)\x1b[0m\n");
  } else if (random < 669 && gotten[7] == 0) { // knight
    gotten[7] = 1;
    knight();
    printf("\x1b[32mVocê encontrou uma peça de xadrez. Deseja guardá-la? "
           "(S/n)\x1b[0m\n");
  } else if (random < 730 && gotten[8] == 0) { // car
    gotten[8] = 1;
    car();
    printf("\x1b[32mVocê encontrou um carrinho de brinquedo. Deseja guardá-lo? "
           "(S/n)\x1b[0m\n");
  } else if (random < 886 && gotten[9] == 0) { // star
    gotten[9] = 1;
    star();
    printf(
        "\x1b[32mVocê encontrou uma estrela. Deseja guardá-la? (S/n)\x1b[0m\n");
  } else {
    // Se o item já foi coletado, tenta novamente
    chestProb();
    return;
  }

  // Tratamento da escolha do usuário
  scanf(" %c", &guardar);
  limparBuffer();
  if (guardar == 'S' || guardar == 's' || guardar == '\n') {
    if (baitRandom <= 23) {

      usleep(1000000);
      printf(".\n");
      usleep(1000000);
      printf(".\n");
      usleep(1000000);
      printf(".\n");
      printf("Esse item era uma armadilha de Amindis 0101. Você perdeu.\n");
      nostalgia = 0;
      for (int i = 0; i < 10; i++) {
        gotten[i] = 0;
      }
      return; // Retorna ao invés de chamar case1() recursivamente
    }
    nostalgia++;
    if (random < 43) { // origami
      printf("\x1b[36mO origami parece ter sido cuidadosamente projetado. Você "
             "se pergunta quem o fez. Você começa a pensar que talvez há "
             "outros por esse labirinto.\x1b[0m\n");
    } else if (random < 86) { // ursinho
      printf("\x1b[36mO ursinho parece um pouco desgastado. Você se pergunta "
             "de quem era tal brinquedo. Sua nostalgia aumenta. Você se lembra "
             "de algo, no fundo.\x1b[0m\n");
    } else if (random < 148) { // astronauta
      printf("\x1b[36mVocê encontrou uma foto. Nela, astronautas põem seus pés "
             "sobre a lua pela primeira vez na história. Você se pergunta onde "
             "está a lua. Você se pergunta se consegue chegar até lá "
             "também.\x1b[0m\n");
    } else if (random < 256) { // camera
      printf("\x1b[36mAlguns momentos não puderam ser capturados no tempo. "
             "Alguns outros foram registrados. No final, apenas essas imagens "
             "restaram.\x1b[0m\n");
    } else if (random < 345) { // medal
      printf("\x1b[36mA medalha brilha com um brilho antigo. Você se pergunta "
             "quem a mereceu. Você se pergunta se você a merece.\x1b[0m\n");
    } else if (random < 440) { // guitar
      printf("\x1b[36mVocê toca uma nota. O violão responde com um som suave. "
             "A madeira tem cheiro de mofo, da mais natural forma de "
             "solidão.\x1b[0m\n");
    } else if (random < 537) { // light bulb
      printf(
          "\x1b[36mParece ter iluminado os períodos de escuridão. Parece ter "
          "deixado claro o caminho para os que estavam perdidos.\x1b[0m\n");
    } else if (random < 669) { // knight
      printf("\x1b[36mAfinal, para que uma batalha? O seu ego interno parece "
             "ter diminuído. A peça é sem sentido sem uma luta. Você se sente "
             "determinado a achar um propósito.\x1b[0m\n");
    } else if (random < 730) { // car
      printf("\x1b[36mAlguém parece ter brincado muito com isso. Você se "
             "pergunta o porquê o deixaram. Você se pergunta se realmente o "
             "deixaram. Sua nostalgia aumenta à medida que você brinca com o "
             "carrinho.\x1b[0m\n");
    } else if (random < 886) { // star
      printf("\x1b[36mA estrela brilha com um brilho antigo. Você se pergunta "
             "se ela ainda brilha, ou se já desapareceu. Você se pergunta se o "
             "brilho é o passado. Você se pergunta se você ainda "
             "brilha.\x1b[0m\n");
    }
  } else if (guardar == 'N' || guardar == 'n') {
    printf("Você não guardou o item. O objeto ficou para o esquecimento.\n");
  } else {
    printf("Escolha inválida. Tente novamente.\n");
  }

  stage(); // Chama a próxima etapa do jogo
}