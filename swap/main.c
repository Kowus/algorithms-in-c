#include <stdio.h>

main(int argc, char const *argv[])
{
  int a = 10, b = 15, temp;
  printf("a = %d\tb = %d\n", a, b);
  printf("==============");
  temp = a;
  a = b;
  b = 10;

  printf("\na = %d\tb = %d\n", a, b);
  return 0;
}
