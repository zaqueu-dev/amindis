#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void animation() {
  printf(". ");
  usleep(1000000);
  printf(". ");
  usleep(1000000);
  printf(". ");
  usleep(1000000);
}

void case1() {
  printf("__00000___00000_\n");
  printf("_00000000_0000000_\n");
  printf("_0000000000000000_\n");
  printf("__00000000000000_\n");
  printf("____00000000000_          10 itens\n");
  printf("_______00000_             você tem 3 chances.\n");
  printf("_________0_\n");
  printf("________*_\n");
  printf("_______*_\n");
  printf("______*_\n");
  printf("______*_                   lembre-se\n");
  printf("_______*_\n");
  printf("________*_\n");
  printf("_________*_\n");
  last = case1;
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
  }
  chestProb();
}

void case2() { // não coloca no checkProb, senão fica dois voltar seguidos;
  animation();
  printf("Direita ou voltar? (D/V)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    checkProb();
  } else if (escolha == 'V' || escolha == 'v') {
    printf("Voltar...\n");
    last();
  }
}

void case3() { // seguir a direita acha item
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    checkProb();
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    chestProb();
  }
}

void case4() { // seguir a esquerda acha item
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    chestProb();
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    checkProb();
  }
}

void case5() { // as duas direções dão item
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
  }
  chestProb();
}

void case6() { // não coloca no checkProb, senão fica dois voltar seguidos;
  animation();
  printf("Esquerda ou voltar? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    checkProb();
  } else if (escolha == 'V' || escolha == 'v') {
    printf("Voltar...\n");
    last();
  }
}

void case7() { // ir a esquerda tem caminho de volta
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    case6();
    last = case7;
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    checkProb();
  }
}

void case8() { // ir a direita tem caminho de volta
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    checkProb();
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    case6();
    last = case7;
  }
}

void case9() { // ir a esquerda tem caminho de volta
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    last = case9;
    case2();
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    checkProb();
  }
}

void case10() { // ir a direita tem caminho de volta
  animation();
  printf("Esquerda ou direita? (E/D)\n");
  char escolha;
  scanf(" %c", &escolha);
  if (escolha == 'E' || escolha == 'e') {
    printf("Esquerda...\n");
    checkProb();
  } else if (escolha == 'D' || escolha == 'd') {
    printf("Direita...\n");
    last = case10;
    case2();
  }
}