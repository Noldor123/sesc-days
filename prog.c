#include <stdio.h>
#include <math.h>
int main(){
  int num, counter=0;
  scanf("%d", &num);
  counter+=num%5;
  counter+=num%25;
  counter+=num%15;
  counter+=num%625;
  counter+=num%3125;
  printf("%d", counter);
  return 0;
}
