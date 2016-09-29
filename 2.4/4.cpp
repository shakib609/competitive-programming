#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, i, j, sum = 0, counter = 1;

    cin >> n;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= i; ++j) {
            sum += counter++;
        }
    }

    cout << sum << endl;
    return 0;
}
