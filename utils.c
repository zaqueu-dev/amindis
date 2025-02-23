#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof((arr)[0]))

int nostalgia = 0;
lastCalled last = NULL;
int gotten[10] = {0};

char telaInicial() {
  printf(".---------------------------------------------.\n");
  printf("|                                             |\n");
  printf("|                                             |\n");
  printf("|                                             |\n");
  printf("|       _              _           _ _        |\n");
  printf("|      / \\   _ __ ___ (_)_ __   __| (_)___    |\n");
  printf("|     / _ \\ | '_ ` _ \\| | '_ \\ / _` | / __|   |\n");
  printf("|    / ___ \\| | | | | | | | | | (_| | \\__ \\   |\n");
  printf("|   /_/__ \\_\\_|_|_|_|_|_|_| |_|\\__,_|_|___/   |\n");
  printf("|    / _ \\/ |/ _ \\/ |                         |\n");
  printf("|   | | | | | | | | |                         |\n");
  printf("|   | |_| | | |_| | |                         |\n");
  printf("|    \\___/|_|\\___/|_|                         |\n");
  printf("|                                             |\n");
  printf("|                                             |\n");
  printf("|                                             |\n");
  printf("'---------------------------------------------'\n");

  char start;
  printf("\n\n Começar? (S/n)\n");
  scanf("%c", &start);
  if (start == '\n' || start == 'S' || start == 's') {
    return 'S';
  } else if (start == 'N' || start == 'n') {
    return 'N';
  } else {
    return 'O';
  }
}

void end() {
  printf(
      "Você segue um pouco mais a frente. Você finalmente encontra uma luz.\n");
  printf("Você se pergunta se é a saída. Você se pergunta se é a entrada.\n");
  printf(
      "Você se pergunta se é a resposta. Você se pergunta se é a pergunta.\n");
  printf("Você se lembra... se lembra?");
  usleep(1000000);
  printf(".\n");
  usleep(1000000);
  printf(".\n");
  usleep(1000000);
  printf(".\n");
  usleep(1000000);
  printf("Você se lembra.\n");
  usleep(1000000);
  printf("As milhares de vezes que você percorreu esse labirinto não foram em "
         "vão.");
}

void stage() {
  if (nostalgia <= 4) {
    int restante = 0;
    for (int i = 0; i < ARRAY_LENGTH(gotten); i++) {
      if (gotten[i] == 0) {
        restante++;
      }
    }
    if (restante < 5 - nostalgia) {
      end();
    } else {
      checkProb();
    }
  } else {
    end();
  }
}
