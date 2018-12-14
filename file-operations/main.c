#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  int integers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
  FILE *intFile, *sqFile;
  intFile = fopen("./integers.txt", "w");
  sqFile = fopen("./squares.txt", "w");

  for (i = 0; i < 10; i++)
  {
    fprintf(intFile, "%d\n", integers[i]);
    int sq = integers[i] * integers[i];
    fprintf(sqFile, "%d\n", sq);
  }
  fclose(intFile);
  fclose(sqFile);

  return 0;
}
