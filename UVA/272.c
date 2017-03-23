#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

  char *input = (char *)malloc(sizeof(char) * 512),
       *output = (char *)malloc(sizeof(char) * 512),
       letter[2];

  unsigned int length, i, count = 0;
  while(scanf("%[^\n]%*c", input) != EOF) {
    length = strlen(input);
    for(i = 0; i < length; i++) {
      if(*(input + i) == '"' && count == 0) {
        strcat(output, "``");
        count++;
      }
      else if(*(input + i) == '"' && count == 1) {
        strcat(output, "''");
        count = 0;
      }
      else {
        letter[0] = *(input + i);
        letter[1] = '\0';
        strcat(output, letter);
      }
    }
    printf("%s\n", output);
    strcpy(output, "\0");
  }
  return 0;
}
