#include<stdio.h>

int main(void) {
  unsigned short int cases;
  long long int a, b;
  scanf("%hu", &cases);
  while(cases--) {
    scanf("%lld %lld", &a, &b);
    printf("%c\n", a > b ? '>' : b == a ? '=' : '<');
  }
  return 0;
}
