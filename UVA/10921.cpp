#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main(void) {

  char input[31] = "", output[31] = "", temp[3] = "";
  unsigned int length, i;
  while(scanf("%s", input) == 1) {
    length = strlen(input);
    for(i = 0; i < length; ++i) {
      temp[0] = input[i];
      temp[1] = '\0';
      if(input[i] >= 65 && input[i] <= 67) { temp[0] = 2 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 68 && input[i] <= 70) { temp[0] = 3 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 71 && input[i] <= 73) { temp[0] = 4 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 74 && input[i] <= 76) { temp[0] = 5 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 77 && input[i] <= 79) { temp[0] = 6 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 80 && input[i] <= 83) { temp[0] = 7 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 84 && input[i] <= 86) { temp[0] = 8 + '0';
                                             strcat(output, temp);}
      else if(input[i] >= 87 && input[i] <= 90) { temp[0] = 9 + '0';
                                             strcat(output, temp);}
      else { strcat(output, temp);}
    }
    printf("%s\n", output);
    strcpy(input, "");
    strcpy(output, "");
  }
  return 0;
}
