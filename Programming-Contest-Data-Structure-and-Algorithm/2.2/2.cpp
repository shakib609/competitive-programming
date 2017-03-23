#include <iostream>
#include <cmath>
using namespace std;


int main() {
  double a, b, c, angle_a, angle_b, angle_c, pi = acos(-1.);

  cout << "Enter the lengths of the triangle: ";
  cin >> a >> b >> c;

  angle_a = acos(
    (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)
  ) * 180.0 / pi;
  angle_b = acos(
    (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * c * a)
  ) * 180.0 / pi;
  angle_c = 180 - (angle_a + angle_b);

  cout << "The triangles angles are: " << endl;
  cout << "Angle A: " << angle_a << endl;
  cout << "Angle B: " << angle_b << endl;
  cout << "Angle C: " << angle_c << endl;
  return 0;
}
