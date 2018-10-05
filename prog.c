#include <stdio.h>
#include <math.h>
int main(){
  int num, counter=0;
  scanf("%d", &num);
  counter+=floor(num/5);
  counter+=floor(num/25);
  counter+=floor(num/125);
  counter+=floor(num/625);
  counter+=floor(num/3125);
  printf("%d", counter);
  return 0;
}
