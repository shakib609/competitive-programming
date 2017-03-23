#include<iostream>
using namespace std;

unsigned int survivor(unsigned int* arr) {
  if ((*arr > *(arr + 1) && *arr < *(arr+ 2)) ||
          (*arr > *(arr + 2) && *arr < *(arr+ 1)))
    return *arr;
  else if (
    (*(arr + 1) > *arr && *(arr + 1) < *(arr+ 2)) ||
    (*(arr + 1) > *(arr + 2) && *(arr + 1) < *arr))
    return *(arr + 1);
  else
    return *(arr + 2);
}


int main(void) {
  unsigned int cases     = 0,
               salary[3] = {1, 9, 2},
               i         = 0,
               result    = 0;

  cin >> cases;

  for (i = 1; i <= cases; i++) {
    cin >> salary[0] >> salary[1] >> salary[2];
    result = survivor(salary);
    cout << "Case " << i << ": " << result << endl;
  }
  return 0;
}
