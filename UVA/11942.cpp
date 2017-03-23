#include <iostream>

#define ARR_SIZE 10

using std::cout;
using std::cin;
using std::endl;

int asc_test(unsigned int arr[]) {
  int i, j, ordered = 1;
  unsigned int prev = arr[2];
  for (i = 3; i < ARR_SIZE; ++i) {
    if (arr[i] < prev) {
      ordered = 1;
      prev = arr[i];
    }
    else {
      ordered = 0;
      break;
    }
  }
  return ordered;
}

int desc_test(unsigned int arr[]) {
  int i, j, ordered = 1;
  unsigned int prev = arr[2];
  for (i = 3; i < ARR_SIZE; ++i) {
    if (arr[i] > prev) {
      ordered = 1;
      prev = arr[i];
    }
    else {
      ordered = 0;
      break;
    }
  }
  return ordered;
}

int check_asc_desc(unsigned int arr[]) {
  int asc, desc;
  if (arr[0] > arr[1]) {
    return asc_test(arr);
  }
  else if (arr[0] < arr[1]) {
    return desc_test(arr);
  }
  else
    return 0;
}

int main(void) {
  unsigned int cases, sequence[15], ordered, i;
  cin >> cases;

  for (int j = 0; j < cases; ++j) {
    if (!j)
      cout << "Lumberjacks:" << endl;
    for (i = 0; i < ARR_SIZE; ++i)
      cin >> sequence[i];

    if (check_asc_desc(sequence))
      cout << "Ordered" << endl;
    else
      cout << "Unordered" << endl;
  }
  return 0;
}
