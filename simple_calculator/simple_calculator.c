#include <stdio.h>

int main(int argc, char const *argv[])
{
  float firstNumber = 0.0f, secondNumber = 0.0f, result;
  int response;
  printf("\n\nEnter 2 Numbers: ");
  scanf("%f %f", &firstNumber, &secondNumber);
  printf("\n\nWhat operation will you like to perform?\n [1] Add\t[2] Subtract\t[3] Multiply\t[4] Divide\t[5] Modulus\t");
  scanf("%d", &response);

  switch (response)
  {
  case 1:
    result = firstNumber + secondNumber;
    printf("\n\nThe sum of %.0f and %.0f is %.0f\n\n", firstNumber, secondNumber, result);
    break;
  case 2:
    result = firstNumber - secondNumber;
    printf("\n\nThe difference between %.0f and %.0f is %.0f\n\n", firstNumber, secondNumber, result);
    break;
  case 3:
    result = firstNumber * secondNumber;
    printf("\n\nThe product %.0f and %.0f is %.0f\n\n", firstNumber, secondNumber, result);
    break;
  case 4:
    result = firstNumber / secondNumber;
    printf("\n\nThe dividend of %.0f and %.0f is %.0f\n\n", firstNumber, secondNumber, result);
    break;
  case 5:
    result = (int)firstNumber % (int)secondNumber;
    printf("\n\nThe modulus of %.0f and %.0f is %.0f\n\n", firstNumber, secondNumber, result);
    break;

  default:
    printf("\n\nOny3 soormi!!!\n\n");
    break;
  }

  return 0;
}
