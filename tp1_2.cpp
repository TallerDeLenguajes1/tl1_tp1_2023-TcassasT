#include<stdio.h>

int square(int number) {
  return number * number;
}

void voidSquare(int *number) {
  *number = *number * *number;
}

void invertir(char *a, char *b) {
  char aux = *a;
  *a = *b;
  *b = aux;
}

void ordenar(char *a, char *b) {
  if(*a > *b) {
    invertir(a, b);
  }
}

// Definicion ejercicios
void fourA();
void fourB();
void fourC();
void fourD();
void fourE();

int main() {
  fourA();
  fourB();
  fourC();
  fourD();
  fourE();
  return 0;
}

// Desarrollo
void fourA() {
  int squareNumber = 2;
  printf("4.a) %d al cuadrado es: %d\n\n", squareNumber, square(squareNumber));
}

void fourB() {
  int squareNumber = 2;
  int voidSquareNumber = squareNumber;
  printf("4.b) Antes de voidSquareNumber: %d\n", voidSquareNumber);
  voidSquare(&voidSquareNumber);
  printf("4.b) Después de voidSquareNumber: %d\n\n", voidSquareNumber);
}

void fourC() {
  int intInput;
  printf("4.c) Ingrese un numero: ");
  scanf("%d", &intInput);
  fflush(stdin);
  printf("4.c) Dirección de memoria donde se almacenó el numero %d: %p\n\n", intInput, &intInput);
}

void fourD() {
  char inputA, inputB;
  printf("4.d) Ingrese un valor para invetir: ");
  scanf("%c", &inputA);
  fflush(stdin);
  printf("4.d) Ingrese otro valor para invetir: ");
  scanf("%c", &inputB);
  fflush(stdin);
  printf("4.d) Antes de invertir: inputA = %c, inputB = %c\n", inputA, inputB);
  invertir(&inputA, &inputB);
  printf("4.d) Después de invertir: inputA = %c, inputB = %c\n\n", inputA, inputB);
}

void fourE() {
  char inputC, inputD;
  printf("4.e) Ingrese un valor para comparar y ordenar: ");
  scanf("%c", &inputC);
  fflush(stdin);
  printf("4.e) Ingrese otro valor para comparar y ordenar: ");
  scanf("%c", &inputD);
  fflush(stdin);
  printf("4.e) Antes de comparar y ordenar: inputC = %c, inputD = %c\n", inputC, inputD);
  invertir(&inputC, &inputD);
  printf("4.e) Después de comparar y ordenar: inputC = %c, inputD = %c\n\n", inputC, inputD);
}