#include <iostream>
using namespace std;

int main(void) {
  unsigned int cases      = 0,
               box_width  = 0,
               box_height = 0,
               result     = 0;
  cin >> cases;
  while(cases--) {
    cin >> box_width >> box_height;
    box_width /= 3;
    box_height /= 3;
    result = box_width * box_height;
    cout << result << endl;
  }
  return 0;
}
