#ifndef TELAS_H
#define TELAS_H
#include <stdio.h>

int pedir_tela(char text[], int *option)
{
  printf("%s\n", text);
  printf("1: Seda |2: Lona |3: Lienzo |4: Jean |5: Salir\n> ");
  scanf("%d", option);

  if (*option == 5)
  {
    printf("Bye\n");
    return 0;
  }
  if (*option < 1 || *option > 5)
  {
    printf("Valor invalido reintenta\n");
    return 0;
  }

  return 1;
}

#endif