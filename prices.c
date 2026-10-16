#include <stdio.h>
#include "telas.c"

void load_prices(double prices[4])
{
  int option = 0;
  while (option != 5)
  {
    int valid = pedir_tela("Ingres el tipo de tela que desea cargarle el precio", &option);
    if (valid != 1)
      continue;

    double price = 0;
    printf("Ingrese el precio\n> ");
    scanf("%lf", &price);
    if (price < 0)
    {
      printf("El precio no puede ser negativo\n");
      continue;
    }

    prices[option - 1] = price;
  }
}

void print_prices(double prices[4])
{
  for (int i = 0; i < 4; i++)
  {
    switch (i)
    {
    case 0:
      printf("Seda");
      break;
    case 1:
      printf("Lona");
      break;
    case 2:
      printf("Lienzo");
      break;
    case 3:
      printf("Jean");
      break;
    }
    printf(": %.2lf\n", prices[i]);
  }
}