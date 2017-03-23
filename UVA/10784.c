#include<stdio.h>

int main(void) {

  unsigned long long int input;
  unsigned short int i = 1;
  while(scanf("%llu", &input) == 1) {
    if(input == 0) break;

    printf("Case %hu: %llu\n", i++, );
  }
  return 0;
}
