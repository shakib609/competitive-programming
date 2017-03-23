#include<stdio.h>

int main(void) {
  printf("Please input a value\n> ");
  int input;
  scanf("%d", &input);
  printf("You entered %.1f\n", (float)input);
  
  return 0;
}