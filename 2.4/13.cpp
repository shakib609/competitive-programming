#include<iostream>
#include<cmath>
using namespace std;


unsigned int factorial(int n) {
    unsigned int result = 1;
    while (n >= 1)
        result *= n--;
    return result;
}


int main(void) {
    unsigned int x, n, i;
    double result = 0;

    cout << "Enter x and n: ";
    cin >> x >> n;
    for (i = 1; i <= n; i+=2) {
        result += pow(x, 2 * (i - 1)) / factorial((i - 1) * 2);
    }
    for (i = 2; i <= n; i+=2) {
        result -= pow(x, 2 * (i - 1)) / factorial((i - 1) * 2);
    }
    cout << "Result(cosx): " << result << endl;
    return 0;
}
