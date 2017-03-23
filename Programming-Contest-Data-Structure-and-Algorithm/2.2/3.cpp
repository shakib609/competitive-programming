#include<iostream>
#include<cmath>
using namespace std;


int main() {
  double a, b, c, half_perimeter, area;
  cout << "Enter the arm lengths of the triangle: ";
  cin >> a >> b >> c;
  half_perimeter = (a + b + c) / 2;
  area = sqrt(
             half_perimeter *
             (half_perimeter - a) *
             (half_perimeter - b) *
             (half_perimeter - c)
  );

  cout << "The area of the triangle is: " << area << endl;
  return 0;
}

