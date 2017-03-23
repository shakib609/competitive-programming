#include<iostream>
#include<stdio.h>
using namespace std;

int main(void) {

  cout << "Please enter your name: ";
  char name[20], name_cpy[20];
  scanf("%s", name);

  /*Copying*/
  unsigned int i = 0;
  while(name[i] != '\0') {
    name_cpy[i] = name[i];
    ++i;
  }
  name_cpy[i] = '\0';
  /*Copying Finished*/

  cout << "Input After Copy:" << endl;
  printf("Input: %s\nCopied: %s\n", name, name_cpy);
  return 0;
}
