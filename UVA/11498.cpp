#include<iostream>
using namespace std;

int main(void) {
  unsigned int queries           = 0;
  int          div_coordinates_x = 0,
               div_coordinates_y = 0,
               coordinates_x     = 0,
               coordinates_y     = 0,
               calculated_x      = 0,
               calculated_y      = 0;


  while (cin >> queries) {
    if (!queries)
      break;                     // Exit the program when 0 is entered

    cin >> div_coordinates_x >> div_coordinates_y;

    while (queries--) {
      cin >> coordinates_x >> coordinates_y;
      calculated_x = coordinates_x - div_coordinates_x;
      calculated_y = coordinates_y - div_coordinates_y;

      if (!calculated_x || !calculated_y)
        cout << "divisa" << endl;
      else if ( calculated_x > 0 && calculated_y > 0)
        cout << "NE" << endl;
      else if (calculated_x > 0 && calculated_y < 0)
        cout << "SE" << endl;
      else if (calculated_x < 0 && calculated_y < 0)
        cout << "SO" << endl;
      else
        cout << "NO" << endl;
    }
  }

  return 0;
}
