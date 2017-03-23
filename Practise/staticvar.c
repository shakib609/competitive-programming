#include<stdio.h>

int* five(void){
  
  static int primes[5] = {2, 3, 5, 7, 11};
  return primes;
}

int main(void) {
  int *five_primes;
  five_primes = five();
  for(int i = 0; i < 5; i++)
    printf("%d\t", *(five_primes + i));
  printf("\n");
  return 0;
}