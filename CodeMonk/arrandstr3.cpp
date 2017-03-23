#include<iostream>
using namespace std;

int main(void) {

  string input;
  unsigned int length, counter = 0, i = 0;
  char ch;
  cout << "Enter a word > ";
  cin >> input;
  length = input.size();
  cout << "Which letter do you want to find > ";
  cin >> ch;

  while(i < length) {
    counter += input[i] == ch ? 1 : 0;
    ++i;
  }

  cout << "The char " << ch << " is present " << counter << " times."<< endl;
  return 0;
}
