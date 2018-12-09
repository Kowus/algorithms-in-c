#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int number, origNum, rem, res = 0, noOfDigits;
  printf("Please enter a number:\t");
  scanf("%d", &number);

  origNum = number;
  while (origNum)
  {
    origNum /= 10;
    ++noOfDigits;
  }

  origNum = number;

  while (origNum)
  {
    rem = origNum % 10;
    res += pow(rem, noOfDigits);
    origNum /= 10;
  }

  if (res == number)
    printf("%d is an armstrong number", number);
  else
    printf("%d is not an armstrong number", number);
  return 0;
}
