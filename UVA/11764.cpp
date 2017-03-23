#include <iostream>
using namespace std;

int main(void) {

  unsigned int cases         = 0,
               walls         = 0,
               all_walls[52] = {0},
               iterator      = 0,
               iterator_2    = 0,
               high_jumps    = 0,
               low_jumps     = 0,
               temp          = 0;

  cin >> cases;

  for (iterator = 1; iterator <= cases; ++iterator) {
    cin >> walls;

    low_jumps     = 0;
    high_jumps    = 0;

    for (iterator_2 = 0; iterator_2 < walls; ++iterator_2) {
      cin >> temp;
      all_walls[iterator_2] = temp;

      if (iterator_2 != 0) {
        if (all_walls[iterator_2 - 1] > temp)
          ++low_jumps;
        else if (all_walls[iterator_2 - 1] < temp)
          ++high_jumps;
      }
    }


    cout << "Case " << iterator << ": "
         << high_jumps << " " << low_jumps << endl;
  }
  return 0;
}
