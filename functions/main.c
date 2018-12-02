#include <stdio.h>

int eqn(int x, int y, int z)
{
  return (x ^ 3) + (y ^ 2) - (3 * z);
}
void eqn_2(int x, int y, int z)
{
  // int e = (x ^ 3) + (y ^ 2) - (3 * z)
  printf("%d\n", (x ^ 3) + (y ^ 2) - (3 * z));
}

int main(int argc, char const *argv[])
{
  /*
    int a = 2 ^ 3 + 4 ^ 2 - 2 * 3;
    int b = 1 ^ 3 + 5 ^ 2 - 7 * 3;
    int c = 6 ^ 3 + 1 ^ 2 - 3 * 3;
  */
  // int a, b, c;
  // a = eqn(2, 4, 2);
  // b = eqn(1, 5, 7);
  // c = eqn(6, 1, 3);
  eqn_2(45, 12, 10);
  eqn_2(445, 22, 10);
  eqn_2(96, 69, 100);
  // printf("\na=%d, b=%d, c=%d", a, b, c);
  return 0;
}
