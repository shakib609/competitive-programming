#include<iostream>
#include<cstdlib>
using namespace std;

int compare(const void *a, const void *b) {
  return (*(int*)b - *(int*)a);
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
    qsort(scary_creature_speeds, total_scary_creatures, sizeof(unsigned int),
          compare);
    cout << "Case " << i << ": " << scary_creature_speeds[0] << endl;;
  }

  return 0;
}
