#include <stdio.h>
int Fact(int);

int main(int argc, char const *argv[])
{
  int num, val;
  printf("\nEnter the number: ");
  scanf("%d", &num);
  val = Fact(num);
  printf("\n Factorial of %d = %d", val);

  return 0;
}

int Fact(int n)
{
  if (n < 0)
    return 0;

  else if (n == 0)
  {
    return 1;
  }

  else
  {
    return (n * Fact(n - 1));
  }
}