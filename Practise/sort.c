#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 64

int compare(const void *a, const void *b) {
  return ( *(char *)a - *(char *)b );
}

int main(void) {

  char *input = (char *)malloc( sizeof(char) * SIZE );
  printf("Please input some text\n> ");
  puts("Before Sort:");
  fgets(input, SIZE, stdin);
  qsort(input, strlen(input), sizeof(char), compare);
  puts("After Sort:");
  printf("%s\n", input);
  return 0;
}
