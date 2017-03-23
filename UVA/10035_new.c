#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

  char *num1 = (char *)malloc(sizeof(char) * 11),
       *num2 = (char *)malloc(sizeof(char) * 11),
       *tmp = (char *)malloc(sizeof(char) * 11);
  unsigned int num1_length, num2_length, count = 0, carry, temp_l;
  unsigned long long int num1_d, num2_d;
  while(1) {
    scanf("%llu %llu", &num1_d, &num2_d);
    if(num1_d == 0 && num2_d == 0)
      break;
    sprintf(num1, "%010d", num1_d);
    sprintf(num2, "%010d", num2_d);
    num1_length = strlen(num1);
    num2_length = strlen(num2);
    carry       = 0;
    count       = 0;

    if(num2_length > num1_length) {
      tmp = num1;
      num1 = num2;
      num2 = tmp;
      temp_l = num1_length;
      num1_length = num2_length;
      num2_length = temp_l;
    }
    while(num2_length--) {
      --num1_length;
      count += (*(num2 + num2_length) - '0') + (*(num1 + num1_length) - '0');
      if(count > 9) {
        carry++;
        count = 1;
      }
      else
        count = 0;
    }

    if(!carry)
      printf("No carry operation.\n");
    else if(carry == 1)
      printf("1 carry operation.\n");
    else
      printf("%u carry operations.\n", carry);
  }

  return 0;
}
