#include<cstdio>
using namespace std;

int main(void) {

  char input[100] = {""};
  while(scanf(" %[^\n]s", input) > 0) {
    printf("%s\n", input);
  }
  return 0;
}
