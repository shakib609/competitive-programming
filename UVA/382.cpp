#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

unsigned int divisorsCalc(unsigned long int input, int* array) {
  if(!input)
    return 3;
  memset(array, 0, 40000);
  unsigned int i, j = 0;
  for(i = 1; i < input; ++i) {
    if(input % i == 0){
      *(array + j) = i;
      ++j;
    }
    else
      continue;
  }
  return 5;
}

unsigned long int divisorsCount(int *array) {
  unsigned int i = 0;
  unsigned long int sum = 0;
  while(*(array + i) != 0){
    sum += *(array + i);
    ++i;
  }
  return sum;
}

int main(void) {
  unsigned int input, calc;
  unsigned long int sum = 0;
  int divisors[40000] = {0};
  cout << "PERFECTION OUTPUT" << endl;
  while(cin >> input) {

    calc = divisorsCalc(input, divisors);
    if(calc == 3)
      break;

    sum = divisorsCount(divisors);
    if(sum < input)
      cout << setw(5) << input << "  " << "DEFICIENT" << endl;
    else if(sum == input)
      cout << setw(5) << input << "  " << "PERFECT" << endl;
    else
      cout << setw(5) << input << "  " << "ABUNDANT" << endl;
    sum = 0;
  }

  cout << "END OF OUTPUT" << endl;
  return 0;
}
