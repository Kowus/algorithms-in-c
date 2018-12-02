// Write a program to determine
// the largest among 3 numbers
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b, c;
  printf("Enter the first number:\t");
  scanf("%d", &a);
  printf("Enter the second number:\t");
  scanf("%d", &b);
  printf("Enter the third number:\t");
  scanf("%d", &c);

  if (a > b)
    if (a > c)
      printf("%d is the largest.", a);
    else
      printf("%d is the largest.", c);
  else
  {
    if (b > c)
      printf("%d is the largest.", b);
    else
      printf("%d is the largest.", c);
  }

  return 0;
}
