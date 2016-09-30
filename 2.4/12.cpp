#include<iostream>
using namespace std;


unsigned int factorial(unsigned int n) {
    unsigned int result = 1;
    while (n >= 1) {
        result *= n--;
    }
    return result;
}

int main(void) {
    unsigned int n, r;
    double result;

    cout << "Enter n and r: ";
    cin >> n >> r;
    result = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "Result: " << result << endl;
    return 0;
}
