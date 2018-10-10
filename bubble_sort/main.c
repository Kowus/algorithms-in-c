#include <stdio.h>
#include <stdlib.h>

main(int argc, char const *argv[])
{
  int n = 15;
  int i, j;
  int numbers[15] = {1, 2, 5, 16, 0, -1, 15, 35, 9, 100, 79, 69, 8, 80, -96};

  for (i = 1; i < n; i++)
  {

    for (j = 0; j < n - 1; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\n", numbers[i]);
    // getch();
  }

  return 0;
}
