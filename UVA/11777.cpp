#include <iostream>
using namespace std;

float sort_and_calc(unsigned int* arr, unsigned int item_count) {
  unsigned int i = 0, j = 0, temp = 0;
  float result = 0;
  for (i = 0; i < item_count; ++i) {
    temp = *(arr + i);
    for (j = 0; j < item_count; ++j) {
      if (temp > *(arr + j)) {
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
        temp = *(arr + i);
      }
    }
  }

  result = (*arr + *(arr + 1)) / 2;
  return result;
}

int main(void) {
  unsigned int cases      = 0;
  unsigned int temporary  = 0;
  unsigned int temp[3]    = {0};
  unsigned int iterator   = 0;
  unsigned int iterator2  = 0;
  float        total      = 0;
  char result = '\0';

  cin >> cases;

  for (iterator = 1; iterator <= cases; ++iterator) {
    total = 0;
    for (iterator2 = 0; iterator2 < 7; ++iterator2) {
      cin >> temporary;
      if (iterator2 < 4) {
        total += temporary;
      } else {
        temp[6 - iterator2] = temporary;
      }
    }

    total += sort_and_calc(temp, 3);

    if (total >= 90)
      result = 'A';
    else if (total >= 80)
      result = 'B';
    else if (total >= 70)
      result = 'C';
    else if (total >= 60)
      result = 'D';
    else
      result = 'F';

    cout << "Case " << iterator << ": " << result << endl;
  }

  return 0;
}
