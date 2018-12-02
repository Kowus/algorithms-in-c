#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int star = 0;
  int i, j;
  for (i = 0; i < 6; i++)
  {
    printf("\n");
    for (j = 0; j < 5; j++)
    {
      star == 0 ? printf("\t#") : printf("\t*");
      star = !star;
    }
    star = !star;   // for 8x8
  }
  return 0;
}
