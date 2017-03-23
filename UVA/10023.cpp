#include <iostream>

int main(void) {
  unsigned long long int input, guess;
  unsigned int cases, hlimit, llimit;

  std::cin >> cases;

  while (cases--) {
    std::cin >> input;
    hlimit = input;
    llimit = 0;
    guess = (hlimit + llimit) / 2;

    while (guess * guess != input) {
      if (guess * guess > input)
        hlimit = guess;
      else
        llimit = guess;
      guess = (hlimit + llimit) / 2;
    }

    std::cout << guess << std::endl;
  }

  return 0;
}
