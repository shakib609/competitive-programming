#include<iostream>
using namespace std;

unsigned int counter(unsigned int buttNum, unsigned int cigNum) {

  unsigned int remButt = cigNum % buttNum;
  cigNum = cigNum + ((cigNum - remButt) / buttNum);

  if((int)cigNum / buttNum > 0)
    return counter(buttNum, cigNum);
  else
    return cigNum;
}

int main() {

  unsigned int buttNum, cigNum, result;
  while(cin >> cigNum >> buttNum) {

    result = counter(buttNum, cigNum);
    cout << result << endl;
  }

  return 0;
}
