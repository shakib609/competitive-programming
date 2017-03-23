#include<stdio.h>

unsigned long f91(unsigned long int input) {
  if(input <= 100) {
    input = input + 11;
    return f91(f91(input));
  }
  else if(input >= 101) {
    return input - 10;
  }
}

int main(void) {

  unsigned long int input, output;
  while(scanf("%lu", &input) == 1) {
    if(input == 0) break;
    output = f91(input);
    printf("f91(%lu) = %lu\n", input, output);
  }

  return 0;
}
