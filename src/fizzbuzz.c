#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int n) {

  int count = 1;

  if(count == n) return 9;

  if(count % 3 == 0)
    printf("Fizz");
  if(count % 5 == 0)
    printf("Buzz");
  if((count % 3 != 0) && (count % 5 != 0))
    printf("%d", count);

  return fizzbuzz(count + 1);
}

int maain(int argc, char* argv[]) {

  if(argc != 2) {
    printf("provide at least one number\n");
    return -1;
  }

  int n = atoi(argv[1]);
  fizzbuzz(n);

  return 0;
}
