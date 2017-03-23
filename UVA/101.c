#include<stdio.h>
#include<string.h>

int main(void) {

  int block_number;
  scanf("%d", &block_number);
  int block[block_number], i;
  char command[5], a, where[5], b;
  for(i = 0; i < block_number; i++) {
    block[i] = i;
  }
  while(scanf("%s %d %s %d", command, &a, where, &b) == 1 && strcmp(command, "quit") != 0) {
    printf("loop is ok\n");
  }
  for(i = 0; i < block_number; i++) {
    printf("%d\t", block[i]);
  }

  return 0;
}
