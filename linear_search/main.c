#include <stdio.h>
#include <stdlib.h>

main(int argc, char const *argv[])
{
  int i;
  int target;
  printf("\n\nPlease enter a number:\t");
  scanf("%d", &target);
  int found = 0;

  int numbers[10] = {1, 2, 5, 16, 0, -1, 15, 35, 9, 100};

  for (i = 0; i < 10; i++)
  {
    if (target == numbers[i])
    {
      found = !found;
      break;
    }
  }

  if (found)
  {
    printf("\nFound %d at position %d\n", target, i + 1);
  }
  else
  {
    printf("\nBetter luck next time\n");
  }

  return 0;
}
