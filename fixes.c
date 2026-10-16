#include <stdio.h>
#include "config.c"

void load_fixes(double fixes[ROWS])
{
  int telar = -1;
  while (telar != 0)
  {
    printf("Ingrese el numero de telar(1-%d) o 0 para salir\n> ", ROWS);
    scanf("%d", &telar);

    if (telar == 0)
      continue;

    if (telar < 1 || telar > ROWS)
    {
      printf("Valor invalido, reintente.\n");
      continue;
    }

    double fix_price = 0;
    printf("Ingrese el monto\n> ");
    scanf("%lf", &fix_price);

    if (fix_price < 0)
    {
      printf("El valor no puede ser negativo\n");
      continue;
    }

    fixes[telar - 1] = fix_price;
  }
}

void print_fixes(double fixes[ROWS])
{
  printf("\t\t| Costo reparacion |\n");
  for (int i = 0; i < ROWS; i++)
  {
    printf("| Telar | %d\t | %.2lf\t|\n", i + 1, fixes[i]);
  }
}