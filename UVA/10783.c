#include<stdio.h>

int main(void) {

  unsigned short int cases, i = 1, x, y;
  int sum = 0;
  scanf("%hu", &cases);
  while(cases) {
    scanf("%hu\n%hu", &x, &y);
    for(x; x <= y; x++) {
      sum += x % 2 ? x : 0;
    }
    printf("Case %hu: %d\n", i, sum);
    sum = 0;
    ++i;
    --cases;
  }
  return  0;
}
