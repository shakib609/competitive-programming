#include <iostream>
#define ARR_SIZE 3

using namespace std;

void sort_array(unsigned int arr[]) {
  unsigned int i, j, temp;
  for (i = 0; i < ARR_SIZE; ++i) {
    temp = arr[i];
    for (j = 0; j < ARR_SIZE; ++j) {
      if (temp < arr[j]) {
        arr[i] = arr[j];
        arr[j] = temp;
        temp = arr[i];
      }
    }
  }
}

int main(void) {

  unsigned int inputs[3], result;

  while (cin >> inputs[0] >> inputs[1] >> inputs[2]) {
    if (inputs[0] + inputs[1] + inputs[2] == 0)
      break;

    sort_array(inputs);
    if (
      (inputs[0] * inputs[0]) + (inputs[1] * inputs[1]) == inputs[2] * inputs[2]
    )
      cout << "right" << endl;
    else
      cout << "wrong" << endl;
  }

  return 0;
}
