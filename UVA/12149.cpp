#include<iostream>
using namespace std;

unsigned int squares(unsigned int length) {
  unsigned int i = length, result = 0;

  for(; i >= 1; --i) {
    result += i * i;
  }
  return result;
}

int main(void) {
  unsigned int length;

  while(1) {
    cin >> length;
    if(!length) goto finish;
    cout << squares(length) << endl;
  }

  finish:
  return 0;
}
