#include <stdio.h>

int main(int argc, char const *argv[])
{
  int array[] = {21, 3, 676, 11};
  int size = sizeof(array) / sizeof(int);
  printf("Size: %d", size);
  return 0;
}
