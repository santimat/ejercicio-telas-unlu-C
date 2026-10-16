#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "config.c"
#include "telas.c"
#include "matrix.c"
#include "prices.c"
#include "fixes.c"
#include "informes.c"

int menu();

int main()
{
  int option = -1;
  while (option != 0)
  {
    option = menu();

    switch (option)
    {
    case 1:
      load_matrix(telas);
      print_matrix(telas);
      break;
    case 2:
      load_prices(prices);
      print_prices(prices);
      break;
    case 3:
      load_fixes(fixes);
      print_fixes(fixes);
      break;
    case 4:
      pedir_informe();
      break;
    case 0:
      printf("Chau!\n");
      break;
    default:
      printf("Valor invalido, intentelo de nuevo\n");
      break;
    }
  }

  return 0;
}

int menu()
{
  int option = 0;
  printf("Que desea cargar?\n");
  printf("1: Metros de tela |2: Precios por metro |3: Precios reparaciones |4: Informes |0: Salir\n> ");
  scanf("%d", &option);

  return option;
}
