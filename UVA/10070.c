#include<stdio.h>

int leap(unsigned long long int n) {
  return (n % 400 == 0 || n % 100 != 0) && n % 4 == 0 ? 1 : 0;
}
int  huluculu(unsigned long long int n) {
  return n % 15 ? 0 : 1;
}
int bulukulu(unsigned long long int n) {
  return (n % 400 == 0 || n % 100 != 0) && n % 55 == 0 ? 1 : 0;
}

int main(void) {

  unsigned long long int year;
  int l, h, b, counter = 0;
  while(1){
    if(counter && scanf("%llu", &year) == 1) {
      printf("\n");
      break;
    }
    l = leap(year);
    h = huluculu(year);
    b = bulukulu(year);
    if(l)
      printf("This is leap year.\n");
    if(h)
      printf("This is huluculu festival year.\n");
    if(b)
      printf("This is bulukulu festival year.\n");
    if(!(l || h || b))
      printf("This is an ordinary year.\n");
  }

  return 0;
}
