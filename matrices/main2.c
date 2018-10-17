#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[3][3], b[3][3], c[3][3], i, j, k, m, n;
  printf("Please enter the number of Rows:\t");
  scanf("%d", &m);
  printf("Please enter the number of Columns:\t");
  scanf("%d", &n);

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\nPlease enter the element for matrix a[%d][%d]:\t", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("\nPlease enter the element for matrix b[%d][%d]:\t", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  return 0;
}
