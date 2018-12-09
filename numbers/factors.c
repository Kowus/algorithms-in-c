#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c, i = 2, fac;

  printf("Please enter a digit:\t");
  scanf("%d", &c);

  printf("The factors of %d:\t", c);

  for (i = 1; i <= c; i++)
  {

    if (c % i == 0)
      printf("%d ", i);
  }

  return 0;
}
