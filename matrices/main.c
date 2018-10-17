#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
  int a[3][3], i, j, m, n, det = 0, c[3][3], adj[3][3];
  printf("Please Enter the Number of Rows:\t");
  scanf("%d", &m);
  printf("Please Enter the Number of Columns:\t");
  scanf("%d", &n);

  printf("\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("Please enter the element a[%d][%d]:\t", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  for (i = 0; i < m; i++)
  {
    printf("\n");
    for (j = 0; j < n; j++)
    {
      printf("\t%d", a[i][j]);
    }
  }

  i = 0;
  for (j = 0; j < n; j++)
    det = det + a[i][j] * (a[i + 1][(j + 1) % 3] * a[i + 2][(j + 2) % 3] - a[i + 1][(j + 2) % 3] * a[i + 2][(j + 1) % 3]);
  printf("\nThe determinant: %d\n", det);

  for (i = 0; i < 3; i++)
  {

    for (j = 0; j < 3; j++)
    {
      c[i][j] = a[(i + 1) % 3][(j + 1) % 3] * a[(i + 2) % 3][(j + 2) % 3] - a[(i + 1) % 3][(j + 2) % 3] * a[(i + 2) % 3][(j + 1) % 3];
    }
  }

  printf("\n\nCofactor");
  printf("\n==========");
  for (i = 0; i < m; i++)
  {
    printf("\n");
    for (j = 0; j < n; j++)
    {
      printf("\t%d", c[i][j]);
    }
  }

  printf("\n\nTransposed");
  printf("\n==========");

  for (j = 0; j < m; j++)
  {
    printf("\n");
    for (i = 0; i < n; i++)
    {
      printf("\t%d", c[i][j]);
    }
  }
  printf("\n");
  return 0;
}
