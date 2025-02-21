#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include "utils.h"  

char telaInicial(){
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
  if(start == '\n' || start == 'S' || start == 's'){
    return 'S';
  }else if(start == 'N' || start == 'n'){
    return 'N';
  }else{
    return 'O';
  }
}


void stage(){
  if(nostalgia <= 5){
    checkProb();
  }else{
    end();
  }
  
}

void end(){
  printf("Você encontrou a saída! Parabéns!\n");
  //diálogo de fim de jogo
}