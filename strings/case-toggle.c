#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str[20], upperstr[20];
  int i = 0;
  puts("Please enter a word");
  gets(str);

  while (str[i])
  {
    upperstr[i] = (str[i] >= 'a' && str[i] <= '2') ? str[i] - 32 : str[i];
    i++;
  }
  printf("To uppercase: %s", upperstr);
  return 0;
}
