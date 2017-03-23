#include<stdio.h>

char grade_calc(int n) {
  if(n <= 49 && n >= 0)
    return 'F';
  else if(n >= 50 && n <= 59)
    return 'D';
  else if(n >= 60 && n <= 69)
    return 'C';
  else if(n >= 70 && n <= 79)
    return 'B';
  else if(n >= 80 && n <= 100)
    return 'A';
  else
    return 'X';
}

int main(void) {
  int i, cases;
  scanf("%d", &cases);
  int numbers[cases];
  for(i = 0; i < cases; i++) {
    scanf("%d", &numbers[i]);
  }

  for(i = 0; i < cases; i++) {
    printf("%c\n", grade_calc(numbers[i]));
  }

  return 0;
}
