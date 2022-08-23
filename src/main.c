#include <stdio.h>
#include <stdlib.h>

#include "funcs.h"

int main(int argc, char* argv[]) {

  nodo* ll = crear_nodo(15);
  nodo*tmp;

  agregar_nodo(80, &ll);
  agregar_nodo(110, &ll);
  agregar_nodo(224, &ll);

  printf("Data structures: \n");
  mostrar_pila(&ll);

  tmp = crear_nodo(777);
  insertar_al_inicio(&ll, tmp);
  mostrar_pila(&ll);

  insertar_despues_de_nodo(ll, crear_nodo(69));
  mostrar_pila(&ll);


  printf("\nBinary search: ");
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  printf("\n%i\n", binary_search(array, 8, 1, 13));

  printf("\nStrings: ");
  str_reverse("\nThis is a test!\n");

  char str1[] = "Static Void";
  char str2[] = "Static Void";
  printf("%i\n", strcmp_custom(str1, str2));

  printf("\nMath: \n");
  printf("%Lf\n", factorial(5));

  printf("%i\n", fib(22));

  printf("%i\n", rollDice());

  printf("\nAckerman: \n");
  printf("%i\n", ack(3, 9));

  printf("\nFizzBuzz: \n");
  fizzbuzz(15);

}

