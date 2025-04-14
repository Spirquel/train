#include "stdio.h"

int main(int argc, char *argv[])
{
  int nombre1 = 0, nombre2 = 0;
  
  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);
  
  printf ("%d + %d = %d\n", nombre1, nombre2, (nombre1 + nombre2));
  printf ("%d - %d = %d\n", nombre1, nombre2, (nombre1 - nombre2));
  printf ("%d / %d = %d\n", nombre1, nombre2, (nombre1 / nombre2));
  printf ("%d * %d = %d\n", nombre1, nombre2, (nombre1 * nombre2));
  printf ("%d module %d = %d\n", nombre1, nombre2, (nombre1 % nombre2));
       
  return 0;
}