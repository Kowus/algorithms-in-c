#include <stdio.h>

struct student
{
  char name[20];
};

struct student arr[10];
int main()
{

  for (int i = 0; i < 30; i++)
  {
    printf("Enter student name:\t");
    scanf("%s", arr[i].name);
  }
}