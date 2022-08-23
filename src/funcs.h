int binary_search(int arrayp[], int element, int leftindex, int rightindex);

// Data structures
# define INT_MIN	(-INT_MAX - 1) // Stolen from limits.h
# define INT_MAX	2147483647

typedef struct nodo {
  int data;
  struct nodo* sig;
} nodo;

nodo* crear_nodo(int data);

void agregar_nodo(int data, struct nodo** pila);

int quitar_nodo(nodo** pila);

void mostrar_pila(nodo** pila);

nodo* encontrar_nodo(nodo* inicio, int data);

void insertar_despues_de_nodo(nodo *nodo_a_insertar_despues, nodo* nuevo_nodo);

nodo *insertar_al_inicio(nodo **inicio, nodo *nodo_a_insertar);

// String manipulation
void str_reverse(char str[]);
int strcmp_custom(const char *str1, const char *str2);

// Math functions
long double factorial(int n);
int fib(int n);
int rollDice(void);

// Fun functions
int ack(int m, int n);
void fizzbuzz(int n);
