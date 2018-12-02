#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str[20];
  int length = 0;
  puts("Please enter the word:\t");
  gets(str);
  while (str[length])
    length += 1;
  printf("\n\nThe length of %s is %d \n\n", str, length);
  getch();
  return 0;
}