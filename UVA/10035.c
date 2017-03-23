#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

  char *num1 = (char *)malloc(sizeof(char) * 12),
       *num2 = (char *)malloc(sizeof(char) * 12);
  unsigned int num1_length, num2_length, count = 0, carry;
  while(1) {
    scanf("%s %s", num1, num2); // Scan the Input
    // Breaks when 0 0
    if(!strcmp(num1, "0") && !strcmp(num2, "0"))
      break;

    num1_length = strlen(num1);
    num2_length = strlen(num2);
    carry       = 0;
    count       = 0;

    if(num1_length >= num2_length) {
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
    }
    else {
      while(num1_length--) {
        --num2_length;
        count += (*(num2 + num2_length) - '0') + (*(num1 + num1_length) - '0');
        if(count > 9) {
          carry++;
          count = 1;
        }
        else
          count = 0;
      }
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
