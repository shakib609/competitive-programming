#include<iostream>
#include<cmath>
using namespace std;

int main(void) {
  unsigned int cases = 0;
  long int     input = 0;
  cin >> cases;
  while (cases--) {
    cin >> input;
    input = abs((((input * 567 / 9) + 7492) * 235 / 47) - 498);
    input = input % 100 / 10;
    cout << input << endl;
  }
  return 0;
}
