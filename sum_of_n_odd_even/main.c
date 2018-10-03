#include <stdio.h>

int main(int argc, char const *argv[])
{
  // SUM
  /*
  int oddSum, evenSum, n;
  printf("Please enter a number: ");
  scanf("%d", &n);
  oddSum = n * n;
  evenSum = n * (n + 1);
  printf("Sum of first %d Odd Numbers is %d\n", n, oddSum);
  printf("Sum of first %d Even Numbers is %d\n", n, evenSum);
  */

  // Average
  int avgO, avgE, n;
  printf("Please enter a number: ");
  scanf("%d", &n);
  avgO = n;
  avgE = n + 1;
  printf("Average of first %d Odd Numbers is %d\n", n, avgO);
  printf("Average of first %d Even Numbers is %d\n", n, avgE);
  return 0;
}
