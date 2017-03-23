#include<iostream>
using namespace std;

int main(void) {

  unsigned int frequency, amplitude, i, j, k, cases;
  cin >> cases;
  while(cases--) {
    cin >> amplitude >> frequency;
    for(i = 0; i < frequency; ++i) {

      for(j = 1; j <= amplitude; ++j) {
        for(k = 0; k < j; ++k)
          cout << j;
        cout << endl;
      }
      for(j = amplitude - 1; j > 0; --j) {
        for(k = 0; k < j; ++k)
          cout << j;
        cout << endl;
      }
      if(i < frequency - 1)
        cout << endl;
    }

    if(cases > 0)
      cout << endl;
  }
  return 0;
}
