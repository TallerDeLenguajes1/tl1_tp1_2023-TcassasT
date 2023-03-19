#include<stdio.h>

int main() {
  int intVariable = 5;
  int *intPointer = &intVariable;

  printf("3.e.1) Contenido del puntero: %d\n", *intPointer);
  printf("3.e.2) Dirección de memoria almacenada por el puntero %p\n", intPointer);
  printf("3.e.3) Dirección de memoria de la variable: %p\n", &intVariable);
  printf("3.e.4) Dirección de memoria del puntero: %p\n", &intPointer);
  printf("3.e.5) Tamaño de memoria de la variable: %d\n", sizeof(intVariable));

  return 0;
}