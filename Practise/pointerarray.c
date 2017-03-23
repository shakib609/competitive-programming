#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

  char *input = (char *)malloc(sizeof(char) * 64);
  printf("Please Enter your name here\n> ");
  fgets(input, 64, stdin);
  int length = strlen(input), i;
  for(i = 0; i < length - 1; i++)
    putchar(*(input + i));
  printf(" (%d)\n",length - 1);
  return 0;
}
