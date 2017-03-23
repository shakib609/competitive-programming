#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define SIZE 64

void arrayfunc(char *input) {
  int length = strlen(input);
  for(int i = 0; i < length; i++) {
    if(*(input + i) == ' ')
      *(input + i) = '_';
    else
      *(input + i) = toupper(*(input + i));

  }
}

int main(void) {
  char *input = (char *)malloc(sizeof(char) * SIZE);
  fgets(input, SIZE, stdin);

  arrayfunc(input);
  printf("%s\n", input);

  return 0;
}
