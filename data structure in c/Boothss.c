#include <stdio.h>
#include <stdlib.h>

int* booth_multiplication(int* m, int* q, int n) {
  int* product = (int*) malloc(2 * n * sizeof(int));
  for (int i = 0; i < 2 * n; i++) {
    product[i] = 0;
  }
  int* a = (int*) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    a[i] = m[i];
  }
  int q_prev = 0;
  for (int i = 0; i < n; i++) {
    int q_curr = q[i];
    if (q_curr == q_prev) {
      // Shift product right
      for (int j = 2 * n - 1; j > 0; j--) {
        product[j] = product[j - 1];
      }
      product[0] = 0;
    } else if (q_curr == 1 && q_prev == 0) {
      // Add m to product
      for (int j = 0; j < n; j++) {
        product[j] += m[j];
      }
      // Shift product right
      for (int j = 2 * n - 1; j > 0; j--) {
        product[j] = product[j - 1];
      }
      product[0] = 0;
    } else if (q_curr == 0 && q_prev == 1) {
      // Subtract m from product
      for (int j = 0; j < n; j++) {
        product[j] -= m[j];
      }
      // Shift product right
      for (int j = 2 * n - 1; j > 0; j--) {
        product[j] = product[j - 1];
      }
      product[0] = 0;
    }
    q_prev = q_curr;
  }
  free(a);
  return product;
}

int main() {
  int m[] = {0, 0, 0, 1};
  int q[] = {0, 0, 1, 1};
  int n = sizeof(m) / sizeof(m[0]);
  int* product = booth_multiplication(m, q, n);
  for (int i = 0; i < 2 * n; i++) {
    printf("%d ", product[i]);
  }
  printf("\n");
  free(product);
  return 0;
}