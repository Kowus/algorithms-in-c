// Write a program to determine
// the smallest among 3 numbers
#include <stdio.h>

int main(int argc, char const *argv[])
{
  /*
   * Compare a with b
   * If a is smaller than b,
   * Compare a with c
   * Otherwise compare b with c
  */
  int a, b, c;
  printf("Enter the first number:\t");
  scanf("%d", &a);
  printf("Enter the second number:\t");
  scanf("%d", &b);
  printf("Enter the third number:\t");
  scanf("%d", &c);

  if (a < b)
    if (a < c)
      printf("%d is the smallest.", a);
    else
      printf("%d is the smallest.", c);
  else
  {
    if (b < c)
      printf("%d is the smallest.", b);
    else
      printf("%d is the smallest.", c);
  }

  return 0;
}
