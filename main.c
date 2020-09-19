#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int digit_sum(int n) {
  if(n==0)
   return n;
  else
   return n%10+digit_sum(n/10);
}

int main(void) {
  int number = atoi(readline("Enter an int: "));
  int result;
  result= digit_sum(number);
  printf("sum of digits of %d is %d.\n",number,result);
  return 0;
}