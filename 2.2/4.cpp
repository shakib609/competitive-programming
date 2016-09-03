#include<iostream>
#include<cmath>
using namespace std;


int main() {
  double radius, pi = acos(-1.);
  cout << "Enter the radius of the circle: ";
  cin >> radius;

  cout << "The perimeter of the circle is: " << 2 * pi * radius << endl;
  return 0;
}

