#include <stdio.h>

main(int argc, char const *argv[])
{
  int a = 10, b = 15;
  printf("a = %d\tb = %d\n", a, b);
  printf("==============");

  a = a + b;
  b = a - b;
  a = a - b;

  printf("\na = %d\tb = %d\n", a, b);
  return 0;
}
