#include <stdio.h>
int a[5], i, n, key, flag = 0;
main(int argc, char const *argv[])
{
  printf("Please enter the number of elements:\t");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("\nPlease enter element %d:\t", i + 1);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
    printf("\nThe element: a[%d] : %d", i, a[i]);

  printf("\nPlease enter the key to be searched:\t");
  scanf("%d", &key);

  int low = 0, high = n - 1, mid;
  for (i = 0; i < n; i++)
  {
    mid = (low + high) / 2;
    if (key == a[mid])
    {
      flag = 1;
      break;
    }
    else if (key > a[mid])
    {
      low = mid + 1;
      continue;
    }
    else
    {
      high = mid - 1;
      continue;
    }
  }
  if (flag == 1)
    printf("key found");
  else
    printf("key not found");

  /* code */
  return 0;
}
