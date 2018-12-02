#include <stdio.h>

int main(int argc, char const *argv[])
{
  unsigned long a = -1, b = 1, c, current_turn, max_turns, sum = 0;

  printf("Enter the number of turns for your series: \t");
  scanf("%d", &max_turns);

  for (current_turn = 0; current_turn < max_turns; current_turn++)
  {
    c = a + b;
    sum += c;
    printf("%d\t", c);
    a = b;
    b = c;
  }

  printf("The sum of first %d terms of the series is %d", max_turns, sum);

  return 0;
}
