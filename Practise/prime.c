#include<stdio.h>

int is_prime(int n) {
  if(n < 2)
    return 0;
  else if(n == 2)
    return 1;
  else {
    int i;
    for(i = 2; i < n; i++) {
      if(n % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}

int main(void) {
  int i, input, counter = 0;
  scanf("%d", &input);
  for(i = 0; i < 600; i++) {
    if(counter == input)
      break;
    if(is_prime(i)) {
      printf("%d\n", i);
      ++counter;
    }
  }
  return 0;
}
