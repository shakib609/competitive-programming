#include<iostream>
#include<iomanip>
using namespace std;

int main(void) {

  unsigned int cases, student, marks[1000] = {0}, i, counter;
  unsigned long int sum;
  float average, result;
  cin >> cases;
  while(cases--) {
    cin >> student;
    sum = 0;
    counter = 0;
    for(i = 0; i < student; i++) {
      cin >> marks[i];
    }
    for(i = 0; i < student; i++) {
      sum += marks[i];
    }
    average = (float)sum / student;
    counter = 0;
    for(i = 0; i < student; i++) {
      counter += (float)marks[i] > average ? 1 : 0;
    }
    result = (float)counter / student * 100;
    cout << fixed << setw(1) << setprecision(3) << result << "%\n";
  }
  return 0;
}
