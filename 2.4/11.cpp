#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 1) {
        factorial *= n--;
    }

    cout << "Factorial: " << factorial << endl;
    return 0;
}
