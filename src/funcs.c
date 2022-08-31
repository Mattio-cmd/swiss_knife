#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Data structures
#include "funcs.h"

nodo* crear_nodo(int data)
{
  nodo* nuevo = (nodo*)malloc(sizeof(nodo));

  nuevo->data = data; // Se le da eso
  nuevo->sig = NULL; // De momento porque solo se esta creando uno

  return nuevo;
}

nodo* encontrar_nodo(nodo* inicio, int data)
{
  nodo *tmp = inicio;
  while(tmp != NULL) {
    if(tmp->data == data) return tmp;
    tmp = tmp->sig;
  }
}

void agregar_nodo(int data, struct nodo** pila)
{
  nodo* nuevo = crear_nodo(data);

  nuevo->sig = *pila;
  *pila = nuevo;
}

void insertar_despues_de_nodo(nodo *nodo_a_insertar_despues, nodo* nuevo_nodo)
{
  nuevo_nodo->sig = nodo_a_insertar_despues->sig;
  nodo_a_insertar_despues->sig = nuevo_nodo;
}

nodo *insertar_al_inicio(nodo **inicio, nodo *nodo_a_insertar)
{ // Añade un nodo al frente de la lista, eso hace la función (lo automatiza)
  nodo_a_insertar->sig = *inicio;
  *inicio = nodo_a_insertar;
  return nodo_a_insertar;
}

int quitar_nodo(nodo **pila) // Removes first element in list
{
  if(!(*pila)) return INT_MIN;

  nodo* primero = *pila;
  int data = primero->data;
  *pila = (*pila)->sig;
  free(primero);

  return data;
}

void mostrar_pila(nodo** pila) // Esto es solo para visualizarlo
{
  nodo* temp = *pila;
  while(temp) {
    printf("%d ", temp->data);
    temp = temp->sig;
  }
  printf("\n");
}


// Search algorithms
int binary_search(int arrayp[], int element, int leftindex, int rightindex)
{
  int midpoint = leftindex + (rightindex - leftindex) / 2;

  if(leftindex > rightindex) return -1;

  if(arrayp[midpoint] == element) {
    return midpoint;
  }
  else if(arrayp[midpoint] > element) {
    binary_search(arrayp, element, leftindex, midpoint -1);
  }
  else {
    return binary_search(arrayp, element, midpoint + 1, rightindex);
  }

  return 0;
}

// String Manipulation
void str_reverse(char str[])
{
    for(int i = strlen(str) - 1; i  >= 0; i--) {
    printf("%c", str[i]);
  }
}

int strcmp_custom(const char *str1, const char *str2) //stolen from stakc overfow
{
    while (*str1 && *str1 == *str2) {
      ++str1;
      ++str2;
    }

    return (int)(unsigned char)(*str1) - (int)(unsigned char)(*str2);
}

// Math
long double factorial(int n)
{
  if (n == 0) return 1;
  else
    return(n * factorial(n-1));
}

int fib(int n)
{
  if(n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}
int rollDice(void) {
    return ((rand() % 6) + 1);
}


// Fun functions
int ack(int m, int n)
{
  if(!m) return n+1;
  if(!n) return ack(m-1, 1);
  return ack(m-1, ack(m, n-1));
}

void fizzbuzz(int n)
{

  if(n == 0) return;
  if(n % 3 == 0)
    printf("Fizz");
  if(n % 5 == 0)
    printf("Buzz");
  if((n % 3 != 0) && (n % 5 != 0))
    printf("%d", n);

  printf("\n");

  return fizzbuzz(n - 1);
}
