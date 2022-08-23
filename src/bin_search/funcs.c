int binary_search(int arrayp[], int element, int leftindex, int rightindex) {
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
