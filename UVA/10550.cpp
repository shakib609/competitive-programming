#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {

  int result            = 720,
     init_position      = 0,
     degree_per_unit    = 360 / 40,
     combination_first  = 0,
     combination_second = 0,
     combination_third  = 0,
     temp               = 0;

  while(
    cin >> init_position
     >> combination_first
     >> combination_second
     >> combination_third
  ) {
    if(combination_first + combination_second + combination_third == 0)
      break;

      //Turning the dial clockwise two full terms
      // means 720 degrees turned
      result = 720; // Change this to 720 deg later

      // Turn the dial clockwise till combination_first
      if (init_position < combination_first)
        temp = 40 - (combination_first - init_position);
      else
        temp = init_position - combination_first;
      result += (temp * degree_per_unit);

      // cout << "After First Combination: " << result << endl;

      // Turn the dial counter clock-wise 1 full turn
      // Current position combination_first
      result += 360;

      // Turn the dial counter clockwise till combination_second
      // Current position combination_second
      if (combination_first > combination_second)
        temp = 40 - (combination_first - combination_second);
      else
        temp = combination_second - combination_first;
      result += (temp * degree_per_unit);

      // cout << "After Second Combination: " << result << endl;

      // Finally turn clockwise till combination_third
      if (combination_second < combination_third)
        temp = 40 - (combination_third - combination_second);
      else
        temp = combination_second - combination_third;
      result += temp * degree_per_unit;

      // Output the result
      cout << result << endl;
  }
  return 0;
}
