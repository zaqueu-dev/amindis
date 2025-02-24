#ifndef UTILS_H
#define UTILS_H

extern int nostalgia;
typedef void (*lastCalled)();
extern lastCalled last;


extern int gotten[10];

char telaInicial();
void stage();
void end();
void badEnd();

void case1();
void case2();
void case3();
void case4();
void case5();
void case6();
void case7();
void case8();
void case9();
void case10();

void chestProb();
void checkProb();

//art
void origami();
void ursinho();
void astronauta();
void camera();
void medal();
void guitar();
void light();
void knight();
void car();
void star(); //10

#endif