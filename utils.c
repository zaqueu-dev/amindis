#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>
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
  setlocale(LC_ALL, "pt_BR.UTF-8");
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
  usleep(2000000);
  printf(".\n.\n");
  printf(
      "Você segue um pouco mais a frente. Você finalmente encontra uma luz.\n");
  usleep(2000000);
  printf("Você se pergunta se é a saída. Você se pergunta se é a entrada.\n");
  usleep(2000000);
  printf(
      "Você se pergunta se é a resposta. Você se pergunta se é a pergunta.\n");
  usleep(2000000);
  printf("Você se lembra... se lembra?");
  usleep(2000000);
  printf(".\n");
  usleep(2000000);
  printf(".\n");
  usleep(2000000);
  printf(".\n");
  usleep(2000000);
  printf("Você se lembra.\n");
  usleep(2000000);
  printf("As milhares de vezes que você percorreu esse labirinto não foram em "
         "vão.");
  usleep(2000000);
  printf("Você se lembra de cada caminho, cada escolha, cada passo.\n");
  usleep(2000000);
  printf("Você se lembra de cada item que você encontrou.\n");
  usleep(2000000);
  printf("Você se lembra de cada vez que você se perdeu.\n");
  usleep(2000000);
  printf("Você se lembra de cada vez que você se encontrou.\n");
  usleep(2000000);
  printf("Você se lembra de cada vez que você se lembrou.\n");
  usleep(2000000);
  printf("Você se lembra de cada vez que você se esqueceu.\n");
  usleep(2000000);
  printf("Você não precisa achar todas as respostas. Você não precisa achar "
         "todas as saídas.\n");
  usleep(2000000);
  printf("Você se lembra quem você é, e o que você é capaz de fazer.\n");
  usleep(2000000);
  printf("Você saiu dessa, e sairá de qualquer outra.\n");
  usleep(2000000);
  printf("Você venceu Amindis 0101.\n");
}

void badEnd() {
  usleep(2000000);
  printf("Você segue um pouco mais a frente. Tudo fica mais escuro.\n");
  printf("        .-\"      \"-.             /|\\\n");
  printf("       /            \\           / |\n");
  printf("      |    .-\"-.    |         /  ;\n");
  printf("      |   ( 0 0 )   |        /  ;\n");
  printf("      |    \\ - /    |       /         quem é você?;\n");
  printf("      |   .-\"-\"-.   |      /  ;\n");
  printf("      |  /       \\  |     /   ;\n");
  printf("      | |         | |    /   ;\n");
  printf("      | |  \\___/  | |   /    ;\n");
  printf("      \\_/_________/_/  /    ;\n");
  printf("        _|_____|_     /     ;\n");
  printf("       / |     | \\   /     ;\n");
  printf("      (_|     |_|)  /      ;\n");
  printf("      '----------------------'\n");
  usleep(2000000);
  printf("Você se pergunta quem é você\n");
  usleep(2000000);
  printf("Você ignorou tudo que achou pelo caminho\n");
  usleep(2000000);
  printf("Você deixou tudo para trás\n");
  usleep(2000000);
  printf("Você não é mais você\n");
  usleep(2000000);
  printf("Você não se lembrou quem era.\n");
  usleep(2000000);
  printf("Você olha para trás e não vê nada\n");
  usleep(2000000);
  printf("Você olha para frente e não vê nada\n");
  usleep(2000000);
  printf("Você se perdeu\n");
  usleep(2000000);
  printf("Amindis 0101 venceu. Recomece.\n");
}

void incompleteEnd() {
  usleep(2000000);
  printf("        .---------.           /|\\\n");
  printf("       /           \\         / |\n");
  printf("      |   ~ ~ ~ ~   |      /  ;\n");
  printf("      |  ( O   O )  |     /  ;\n");
  printf("      |   \\  -  /   |    /   ;\n");
  printf("      |  /       \\  |   /   ;\n");
  printf("      | |  ___    | |  /    ;\n");
  printf("      | | (___)   | | /     ;\n");
  printf("      \\_|_______|_/ /      ;\n");
  printf("        _|_____|_  /       ;\n");
  printf("       / |     | \\/       ;\n");
  printf("      (_|     |_|)        ;\n");
  printf("      '--------------------'\n");
  usleep(1000000);
  printf("Você se pergunta o que você fez de errado.\n");
  usleep(1000000);
  printf("Você ignorou muita coisa que achou pelo caminho\n");
  usleep(1000000);
  printf("Você podia ter explorado mais\n");
  usleep(1000000);
  printf("Você teve medo de se perder.\n");
  usleep(1000000);
  printf("Você não se lembrou de quem era.\n");
  usleep(1000000);
  printf("Você tentou\n");
  usleep(1000000);
  printf("Amindis 0101 venceu. Recomece.\n");
}

void stage() {
  if (nostalgia <= 4) {
    int restante = 0;
    for (int i = 0; i < ARRAY_LENGTH(gotten); i++) {
      if (gotten[i] == 0) {
        restante++;
      }
    }
    if ((nostalgia != 0) && (restante < 5 - nostalgia)) {
      badEnd();
    } else if (restante < 5 - nostalgia) {

    } else {
      checkProb(); // a não ser que a cada item a nostalgia cresça,
                   // independentemente.
    }
  } else {
    end();
  }
}
