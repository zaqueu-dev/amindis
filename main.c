#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"
#include <time.h>

int main(){
  srand(time(NULL));

  char start = telaInicial();

  if(start == 'S' || start == 's'){
    printf("Bem vindo a Amindis! Você precisa achar a saída para a █████ $#$$%%$###$#$!!!\n");
    usleep(1000000);
    printf(".\n");

    fflush(stdout);
    usleep(1000000);
    printf(".\n");
    usleep(1000000);
    fflush(stdout);
    usleep(1000000);
    printf(".\n");
    fflush(stdout);

    case1();
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