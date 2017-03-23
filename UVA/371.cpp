#include<iostream>
using namespace std;

unsigned int ackermann(unsigned int num) {
  unsigned int count = 0;

  if(num == 1) {
    num = 4;
    count++;
  }

  while(num != 1) {
    if(num % 2 == 0)
      num /= 2;
    else
      num = num * 3 + 1;
    count++;
  }
  return count;
}


int main(void) {
  unsigned int a, b, num, length, i, temp;

  while(1) {
    cin >> a >> b;
    if(a == 0 && b == 0)
      goto finish;

    if(a > b) {
      temp = a;
      a = b;
      b = temp;
    }

    num = a; length = ackermann(a);

    for(i = a + 1; i <= b; ++i) {
      temp = ackermann(i);
      if(temp > length) {
        num = i;
        length = temp;
      }
    }

    cout <<
      "Between " << a  <<
      " and " << b <<
      ", " << num <<
      " generates the longest sequence of " << length <<
      " values." << endl;
  }

  finish:
  return 0;
}
