#include <stdio.h>

int fact(int num){
  int count=1;
  for (int i=1;i<=num;i++){
    count*=i;
  }
  return count;
}
int cnk(int n, int k){
  return (fact(n)/fact(k))/fact(n-k);
}
int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("%d", cnk(x, y-1));
}
