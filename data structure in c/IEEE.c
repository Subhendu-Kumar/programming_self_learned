#include <stdio.h>
#include <stdlib.h>

typedef union {
  float f;
  struct {
    unsigned int sign : 1;
    unsigned int expo : 8;
    unsigned int manti : 23;
  } parts;
} Float;

Float add(Float a, Float b) {
  if (a.parts.expo > b.parts.expo) {
    b.parts.manti >>= a.parts.expo - b.parts.expo;
    b.parts.expo = a.parts.expo;
  } else if (a.parts.expo < b.parts.expo) {
    a.parts.manti >>= b.parts.expo - a.parts.expo;
    a.parts.expo = b.parts.expo;
  }
  a.parts.manti += b.parts.manti;
  if (a.parts.manti > (1 << 23)) {
    a.parts.manti >>= 1;
    a.parts.expo++;
  }
  return a;
}

Float subtract(Float a, Float b) {
  b.parts.sign ^= 1;
  return add(a, b);
}

void printFloat(Float f) {
  printf("%s%d.%d x 2^%d\n",
         f.parts.sign ? "-" : "",
         f.parts.manti >> 23,
         f.parts.manti & ((1 << 23) - 1),
         f.parts.expo - 127);
}

void main() {
  Float a = { .f = 1.25f };
  Float b = { .f = 0.5f };
  Float sum = add(a, b);
  Float difference = subtract(a, b);
  printFloat(sum);
  printFloat(difference);
}