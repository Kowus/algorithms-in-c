#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, n, rem, res = 0;
  printf("Enter the number:\t");
  scanf("%d", &number);

  n = number;
  while (n)
  {
    rem = n % 10;
    res += rem;
    n /= 10;
  }

  printf("The sum of %d's digits is %d", number, res);
  return 0;
}
