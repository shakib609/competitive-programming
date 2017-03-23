#include<cstdio>
#include<cstring>
using namespace std;

unsigned int one_two(char* argument) {
  char *search_term_1,
       *search_term_2;
  if ((strchr(argument, 't') != NULL && strchr(argument, 'w') != NULL) ||
      (strchr(argument, 'o') != NULL && strchr(argument, 'w') != NULL) ||
      (strchr(argument, 't') != NULL && strchr(argument, 'o') != NULL) )
    return 2;
  else
    return 1;
}

int main(void) {
  char input[7] = "";
  unsigned int cases = 0;
  scanf("%u", &cases);
  while (cases--) {
    scanf("%s", input);
    if (strlen(input) == 5)
      printf("3\n");
    else
      printf("%u\n", one_two(input));
    strcpy(input, "");
  }
  return 0;
}
