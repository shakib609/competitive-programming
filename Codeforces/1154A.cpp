#include <iostream>
using namespace std;

int main() {
  unsigned long long int nums[4], temp;
  unsigned int i, j, n = 4;

  for (i = 0; i < n; i++)
    cin >> nums[i];

  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (nums[j] < nums[j + 1]) {
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }

  cout << nums[0] - nums[1] << ' ' 
    << nums[0] - nums[2] << ' ' 
    << nums[0] - nums[3] << endl;
  return 0;
}
