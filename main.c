#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"

int main(){

  int stage = 0;

  int nostalgia = 0;

  char start = telaInicial();

  if(start == 'S' || start == 's'){
    printf("Bem vindo a Amindis! Você precisa achar a saída para a █████ $#$$%%$###$#$!!!\n");
    usleep(1000000);
    printf("\n.");

    fflush(stdout);
    usleep(1000000);
    printf("\n.");
    usleep(1000000);
    fflush(stdout);
    usleep(1000000);
    printf("\n.\n");
    fflush(stdout);

    char escolha;
    printf("Esquerda ou Direita? (E/d)\n");
    scanf(" %c", &escolha);
    if(escolha == '\n'){
      escolha = 'E';
    }

    if(escolha == 'E' || escolha == 'e'){
      printf("Você escolheu a esquerda. Você encontrou um monstro. Game Over.\n");
    }else if(escolha == 'D' || escolha == 'd'){
      printf("Você escolheu a direita. Você encontrou um baú. Deseja abrir? (S/n)\n");
      char abrir;
      scanf(" %c", &abrir);
      if(abrir == 'S' || abrir == 's'){
        printf("Você encontrou a saída! Parabéns!\n");
      }else if(abrir == 'N' || abrir == 'n'){
        printf("Você não encontrou a saída. Game Over.\n");
      }
    }
  }else if(start == 'N' || start == 'n'){
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
    printf("Game Over\n");
    printf("Você não fica curioso? Você nem sequer chegou a jogar.");
  }
  
 
  return 0;
}