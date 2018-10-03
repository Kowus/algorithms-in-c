#include <stdio.h>

int main(int argc, char const *argv[])
{
  int oddSum, evenSum, n;
  printf("Please enter a number: ");
  scanf("%d", &n);
  /*
  SUM
  ===
  oddSum = n * n;
  evenSum = n * (n + 1);
  printf("Sum of first %d Odd Numbers is %d\n", n, oddSum);
  printf("Sum of first %d Even Numbers is %d\n", n, evenSum);
  */

  // Average
  oddSum = (n * n) / n;
  evenSum = (n * (n + 1)) / n;
  printf("Average of first %d Odd Numbers is %d\n", n, oddSum);
  printf("Average of first %d Even Numbers is %d\n", n, evenSum);
  return 0;
}
