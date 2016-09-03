#include <iostream>
#include <cmath>
using namespace std;


int main() {
  double input, result;
  unsigned int main_result;
  
  cout << "Enter a number:" << endl;
  cin >> input;
  result = sqrt(input);
  main_result = round(result);
  cout << "Square Root: " << result << endl;
  cout << "Near Root: " << main_result << endl;

  return 0;
}

