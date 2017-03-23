#include<iostream>
#include<sstream>
using namespace std;

unsigned long int gcd(unsigned int a, unsigned int b) {
  unsigned int i, gcd = 1;
  if (a > b) {
    unsigned int temp = a;
    a = b;
    b = temp;
  }

  for(i = a; i >= 2; --i) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
      break;
    }
  }
  return gcd;
}


unsigned int str_to_int_arr(unsigned int arr[], string str) {
  unsigned int i = 0;
  istringstream iss(str);
  while(iss >> arr[i])
    i++;
  return i;
}


int main(void) {
  unsigned int inputs[101] = {0},
               cases,
               i,
               j,
               length,
               temp,
               max;
  string line;
  cin >> cases >> ws;

  while(cases--) {
    getline(cin, line);
    length = str_to_int_arr(inputs, line);
    max = 1;
    for(i = 0; i < length; ++i) {
      for(j = i + 1; j < length; ++j) {
        temp = gcd(inputs[i], inputs[j]);
        if(temp > max)
          max = temp;
      }
    }

    cout << max << endl;
  }
  return 0;
}
