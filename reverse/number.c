#include <stdio.h>

int main(){
  int n;
  printf("Please enter the number you want to reverse:\t");
  scanf("%d",&n);
  int rev=0,rem;
  int num = n;
  while(n>0)
  {
      rem=n%10; //take out the remainder .. so it becomes 5 for 12345
      rev=rev*10+rem; //multiply the current number by 10 and add this remainder.
      n=n/10; //divide the number. So it becomes 1234.
  }
  // printf("T%d",rev);
  printf("\nThe reverse of %d is %d, and their difference is %d", num, rev, num - rev);
}