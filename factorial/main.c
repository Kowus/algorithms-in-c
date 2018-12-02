#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n = 5, factorial = 1, i;

  for (i = n; i > 0; i--)
  {
    factorial *= i;
  }
  printf("The factorial of %d is %d.", n, factorial);

  return 0;
}
