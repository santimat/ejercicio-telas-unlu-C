#include <stdio.h>
#include "config.c"
#include "telas.c"

void load_matrix(int telas[ROWS][4])
{
  int option = 0;
  int telar = 0;
  while (option != 5)
  {
    int valid = pedir_tela("Ingrese el tipo de tela que desea cargar.\n", &option);
    if (!valid)
      continue;

    int meters = 0;
    printf("Ingrese la cantidad de metros\n> ");
    scanf("%d", &meters);
    if (meters < 0)
    {
      printf("Los metros no pueden ser negativos. Reintente.");
      continue;
    }

    telas[telar][option] = meters;
  }
}

void print_matrix(int telas[ROWS][4])
{
  printf("\nMatriz de telas:\n");
  printf("Fila\tSeda\tLona\tLienzo\tJean\n");

  for (int i = 0; i < ROWS; i++)
  {
    printf("%d\t", i + 1);
    for (int j = 0; j < 4; j++)
    {
      printf("%d\t", telas[i][j]);
    }
    printf("\n");
  }
}
