#include <stdio.h>

int main(int argc, char const *argv[])
{
  char str[20];
  int i = 0;
  puts("Please enter a word");
  gets(str);

  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;

    else if (str[i] >= 'A' && str[i] <= 'Z')
    {

      str[i] = str[i] + 32;
    }

    i++;
  }
  printf("Toggle case: %s", str);
  return 0;
}
