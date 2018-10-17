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

  getch();

  printf("\nMatrix A");
  printf("\n========");
  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", a[i][j]);
    }
  }

  printf("\n\nMatrix B");
  printf("\n========");
  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", b[i][j]);
    }
  }
  printf("\n\nMatrix A * Matrix B");
  printf("\n========");

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      c[i][j] = 0;

  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
      for (k = 0; k < 3; k++)
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
  }

  for (i = 0; i < 3; i++)
  {
    printf("\n");
    for (j = 0; j < 3; j++)
    {
      printf("\t%d", c[i][j]);
    }
  }

  return 0;
}
