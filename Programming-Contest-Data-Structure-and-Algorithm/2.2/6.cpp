#include<iostream>
#include<cmath>
using namespace std;


double distance_between_points(int a[], int b[]);
double triangle_area(double a, double b, double c);


int main() {
  int point_a[2], point_b[2], point_c[2];
  double len1, len2, len3, area;

  cout << "Enter the co ordinates of the points of the triangle." << endl;
  cout << "Point A: "; cin >> point_a[0] >> point_a[1];
  cout << "Point B: "; cin >> point_b[0] >> point_b[1];
  cout << "Point C: "; cin >> point_c[0] >> point_c[1];

  len1 = distance_between_points(point_a, point_b);
  len2 = distance_between_points(point_b, point_c);
  len3 = distance_between_points(point_c, point_a);

  area = triangle_area(len1, len2, len3);

  cout << "Area of the triangle: " << area << endl;
  return 0;
}


double distance_between_points(int a[], int b[]) {
  double length = sqrt(
    pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2)
  );
  return length;
}


double triangle_area(double a, double b, double c) {
  double half_perimeter = (a + b + c) / 2, area;
  area = sqrt(
    half_perimeter *
    (half_perimeter - a) *
    (half_perimeter - b) *
    (half_perimeter - c)
  );
  return area;
}
