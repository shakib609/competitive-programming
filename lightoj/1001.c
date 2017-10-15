#include <stdio.h>

int main(void) {
  int cases, input, a, b;
  scanf("%d", &cases);
  while(cases) {
    scanf("%d", &input);
    if(input == 20) {
      a = input / 2;
      b = input / 2;
    }else {
      a = input % 10;
      b = input - a;
    }
    printf("%d %d\n", a, b);
    cases--;
  }
  return 0;
}
