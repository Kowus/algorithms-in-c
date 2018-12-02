// Write a program to determine
// whether number is even or odd
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number;
  printf("Enter the number:\t");
  scanf("%d", &number);

  printf("%d is an %s number.", number, (number % 2 == 0) ? "even" : "odd");

  return 0;
}