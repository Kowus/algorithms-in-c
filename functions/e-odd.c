#include <stdio.h>

int evenOrOdd(int number)
{
  return number % 2 == 0 ? 1 : 0;
}

int main(int argc, char const *argv[])
{
  int input;
  printf("Please enter a number:\t");
  scanf("%d", &input);

  // input % 2 == 0 ? printf("%d is even", input) : printf("%d is odd", input);
  if (evenOrOdd(input))
  {
    printf("%d is even", input);
  }
  else
  {
    printf("%d is odd", input);
  }

  return 0;
}
