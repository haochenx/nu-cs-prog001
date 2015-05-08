#include <stdio.h>

int main(void) {
  int a = 0x0f0f;
  int b = 0x4567;

  // logical conjunction
  //
  // that is, "bitwise and" on the binary representation
  // of integers
  //
  // E.g. 1100 & 1010 == 1000
  printf("%04X and %04X      --> %04X\n", a, b, a & b);

  // exclusive logical disjunction
  //
  // that is, "bitwise xor" on the binary representation
  // of integers
  //
  // E.g. 1100 ^ 1010 == 0110
  printf("%04X xor %04X      --> %04X\n", a, b, a ^ b);

  // bit shifting
  //
  // that is, with the binary representation of an integer,
  // shift the whole bits to the right or left (right in
  // this case)
  //
  // E.g. 00110111001111 >> 2 == 00001101110011
  // E.g. 00110111001111 << 2 == 00110111001100
  printf("%04X shifts right 2 --> %04X\n", a, a >> 2);

  return 0;
}
