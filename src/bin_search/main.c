#include <stdio.h>

/*int binary_search(int arrayp[], int element, int leftindex, int rightindex);*/
 binary_search(int arrayp[], int element, int leftindex, int rightindex) {
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
}

int main(int argc, char *argv[]) {
  int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int unsorted[] = {2, 4, 5, 8, 12, 1, 11, 12, 10};
  int number;
  printf("Numero dentro del array: ");
  scanf("%d", &number);

  int  index = binary_search(sorted, number, 0, 12);

  printf("Index of %d: %d\n", number, index);
}

