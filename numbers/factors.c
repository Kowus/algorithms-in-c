#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c, i = 2, facSum = 0;

  printf("Please enter a digit:\t");
  scanf("%d", &c);

  printf("The factors of %d:\t", c);

  for (i = 1; i <= c; i++)
  {

    if (c % i == 0)
    {
      printf("%d ", i);
      if (i != c)
        facSum += i;
    }
  }

  if (facSum == c)
    printf("\n%d is a perfect number", c);
  else
    printf("\n%d is not a perfect number", c);

  return 0;
}
