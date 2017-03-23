#include<iostream>
#include<cstring>
using namespace std;

void sort(unsigned int* arr, unsigned int size) {
  unsigned int i = 0, j = 0, temp = 0;

  for (i = 0; i < size; ++i) {
    temp = *(arr + i);
    for (j = 0; j < size; ++j) {
      if (temp > *(arr + j)) {
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
        temp       = *(arr + i);
      }
    }
  }
}

int main(void) {
  unsigned int cases                      =  0,
               total_scary_creatures      =  0,
               scary_creature_speeds[100] = {0},
               i                          =  0,
               j                          =  0;

  cin >> cases;
  for (i = 1; i <= cases; ++i) {
    cin >> total_scary_creatures;
    for (j = 0; j < total_scary_creatures; ++j) {
      cin >> scary_creature_speeds[j];
    }
    sort(scary_creature_speeds, total_scary_creatures);
    cout << "Case " << i << ": " << scary_creature_speeds[0] << endl;;
  }

  return 0;
}
