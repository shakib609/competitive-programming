#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main(void) {

  unsigned int cases, length, root, i, j, k;
  char temp[100][100], input[10002], output[10002];
  cin >> cases;

  while(cases--) {

    scanf(" %[^\n]s", input);
    length = strlen(input);
    root = sqrt(length);
    if(root * root != length) {
      cout << "INVALID\n";
    }
    else {
      k = 0;
      for(i = 0; i < root; ++i) {
        for(j = 0; j < root; ++j) {
          temp[i][j] = input[k];
          ++k;
        }
      }
      k = 0;
      for(i = 0; i < root; ++i) {
        for(j = 0; j < root; ++j) {
          output[k] = temp[j][i];
          ++k;
        }
      }
      output[length] = '\0';
      printf("%s\n",output);
    }
  }
  return 0;
}
