#include<iostream>
using namespace std;

int main(void) {
  unsigned int cases, num, rows, i, j, temp;
  cin >> cases;

  while(cases--) {
    cin >> num;
    rows = temp = 0;
    i = 1;
    while(temp != num) {
      for(j = 1; j <= i; ++j) {
        if (temp == num)
          break;
        temp++;
      }
      if((j - 1) % i == 0)
        ++rows;
      ++i;
    }

    cout << rows << endl;
  }
  return 0;
}
