#include<stdio.h>

int main(void) {

  unsigned long long int cases, i;
  long long int a, b, c;
  scanf("%llu", &cases);
  for(i = 1; i <= cases; i++) {
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a + b <= c || b + c <= a || c + a <= b || a < 1 || b < 1 || c < 1) {
      printf("Case %llu: Invalid\n", i);
    }
    else {
      if(a == b && b == c)
        printf("Case %llu: Equilateral\n", i);
      else if( a == b || a == c || b == c)
        printf("Case %llu: Isosceles\n", i);
      else
        printf("Case %llu: Scalene\n", i);
    }
  }
  return 0;
}
