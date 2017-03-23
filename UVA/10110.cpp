#include<iostream>
using namespace std;

int main(void) {

  unsigned long long int input = 0, n;
  unsigned short int on;
  while(cin >> input) {
    if(input == 0)
      break;
    on = input * (input / );
    // cout << (on == 0 ? "no" : "yes") << endl;
    cout << on << endl;
  }
  return 0;
}

/*
    for(n = 1; n <= input; n++) {
      if(input % n == 0) {
        on = (on == 0) ? 1 : 0;
      }
    }
*/
