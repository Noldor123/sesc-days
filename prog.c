#include <stdio.h>
#include <math.h>
int main(){
  int days, weeks, years;
  scanf("%d", &days);
  years = floor(days/365);
  days = days%365;
  weeks= floor(days/7);
  days=days%7;
  printf("years: %d\nweeks: %d\ndays: %d", years, weeks, days);
  return 0;
}
