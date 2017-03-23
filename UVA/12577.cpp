#include<iostream>
#include<string>
using namespace std;

int main(void) {
  string input;
  unsigned int i = 1;
  while (cin >> input) {
    if (input == "Hajj")
      cout << "Case " << i++ << ": Hajj-e-Akbar" << endl;
    else if (input == "Umrah")
      cout << "Case " << i++ << ": Hajj-e-Asghar" << endl;
    else
      break;
  }
  return 0;
}
