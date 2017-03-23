#include <stdio.h>
#include <string.h>

char* count_digits(int num, unsigned int count[]) {
  while(num != 0) {
    count[num % 10] += 1;
    num /= 10;
  }
}

int main(void) {
  unsigned int cases, input, i, count[10] = {0};

  scanf("%d", &cases);

  while(cases--) {
    scanf("%d", &input);
    for(i = 1; i <= input; i++) {
      count_digits(i, count);
    }
    for (i = 0; i < 10; i++) {
      printf("%d", count[i]);
      if(i < 9)
        printf(" ");
    }
    printf("\n");
    memset(count, 0, sizeof(count));
  }

  return 0;
}
