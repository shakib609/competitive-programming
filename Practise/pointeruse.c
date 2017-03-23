#include<stdio.h>

int main(void) {
  int a, *ptra;
  ptra = &a;
  printf("A address value: %p\n", ptra);
  *ptra = 69;
  printf("A variable value: %d\n", a);
  ++*ptra;
  printf("Changed value: %d\n", a);
  printf("Changed Address value: %p\n", ptra);
  return 0;
}
