#include<iostream>
#include<cmath>
using namespace std;

int main(void) {
    unsigned int n, i, isprime = 1;
    cout << "Enter a number: ";
    cin >> n;

    for(i = 2; i <= (int)sqrt(n); ++i) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }
    cout << n << " is ";
    if (isprime)
        cout << "a prime." << endl;
    else
        cout << "not a prime." << endl;

    return 0;
}
