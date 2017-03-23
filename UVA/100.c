#include<stdio.h>

int cycle(int a) {

    int n = 1;
    while(a != 1) {
        if(a % 2) {
            a = 3 * a + 1;
        } else {
            a /= 2;
        }
        n++;
    }
    return n;
}

int main(void) {

    int num1, num2, i, maximum, temp;
    while(scanf("%d %d", &num1, &num2) == 2) {
      maximum = 0;
      if(num2 >= num1) {
        for(i = num1; i <= num2; i++) {
          temp = cycle(i);
          maximum = (temp > maximum ? temp : maximum);
        }
      } else {
        for(i = num2; i <= num1; i++) {
          temp = cycle(i);
          maximum = (temp > maximum ? temp : maximum);
        }
      }
      printf("%d %d %d\n", num1, num2, maximum);
    }

    return 0;
}
