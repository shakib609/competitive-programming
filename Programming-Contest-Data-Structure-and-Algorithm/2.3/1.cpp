#include <iostream>
#include <cmath>
using namespace std;

int reverse_number(unsigned int);
int is_palindrome(unsigned int);


int main(void) {
    unsigned int n, count = 1, current_num = 1;
    cin >> n;

    while (1) {
        if (is_palindrome(++current_num)) {
            count++;
            if (count == n)
                break;
        }
    }

    cout << current_num << endl;

    return 0;
}


// Reverses the given number and returns it
int reverse_number(unsigned int number) {
    unsigned int i, j, temp[10];
    for (i = 0; number != 0; ++i) {
        temp[i] = number % 10;
        number /= 10;
    }
    for (j = 0; j < i; ++j) {
        number += temp[j] * pow(10, i - 1 - j);
    }
    return number;
}


// Checks if the number is a palindrome
int is_palindrome(unsigned int number) {
    int reversed = reverse_number(number);
    if (number == reversed)
        return 1;
    else
        return 0;
}
