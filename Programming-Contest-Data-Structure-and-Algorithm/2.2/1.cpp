#include<iostream>
#include<cmath>
using namespace std;


int main() {
  double x1, x2, y1, y2, result;
  cout << "Enter x1, y1(separated with a space): ";
  cin >> x1 >> y1;
  cout << "Enter x2, y2(separated with a space): ";
  cin >> x2 >> y2;
  
  result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  cout << "The distance between two points: " << result << endl;
  return 0;
}
