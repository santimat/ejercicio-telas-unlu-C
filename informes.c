#include <stdio.h>
#include "config.c"

void gastado_telar(double fixes[ROWS]);

void pedir_informe()
{
  int option = -1;
  while (option != 0)
  {
    printf("Ingrese el tipo de informe que quiere\n");
    printf("1: Gastado en mantenimiento de un telar\n");
    printf("2: Telar que más produjo\n");
    printf("3: Tela que más metros se produjeron\n");
    printf("4: Telar que más metros produjo\n");
    printf("5: Porcentaje en relación de pesos producidos y pesos gastos de cada telar\n");
    printf("0: Salir\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      gastado_telar(fixes);
      break;
    default:
      printf("Opcion invalida\n");
      break;
    }
  }
}

int validar_telar(int *telar)
{
  printf("Ingrese el numero de telar (0-%d) o 0 para salir.\n> ", ROWS);
  scanf("%d", &telar);
  if (*telar == 0)
    return 0;

  if (*telar < 0 || *telar > ROWS)
  {
    printf("Telar invalido, intente de nuevo.\n");
    return 0;
  }
}

void telar_mas_productivo(double prices[ROWS])
{
  int telar = 0;
}

void gastado_telar(double fixes[ROWS])
{
  int telar = -1;

  while (telar != 0)
  {
    int valid = validar_telar(&telar);
    if (valid != 1)
      continue;

    printf("Gastado en el telar: %d\t| %.2lf\n", telar, fixes[telar - 1]);
  }
}