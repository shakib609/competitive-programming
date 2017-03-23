#include<stdio.h>

int main(void) {
  int i, cases;
  unsigned long int tmp;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%ul", &tmp);
    if((tmp == 0 || tmp % 4 == 0) && (tmp % 100 != 0 || tmp % 400 == 0)) {
      printf("1\n");
    }
    else
      printf("0\n");
  }

  return 0;
}
