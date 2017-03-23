#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

  char *input = (char *)malloc(sizeof(char) * 512),
       *output = (char *)malloc(sizeof(char) * 512);
  unsigned int length, i;
  while(scanf("%s", input) == 1) {
    length = (unsigned int)strlen(input);
    for(i = 0; i < length; i++) {
      putchar(*(input + i) - 7);
    }
    printf("\n");
  }
  return 0;
}
