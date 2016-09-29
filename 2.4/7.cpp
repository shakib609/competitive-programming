#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, i, j, sum = 0;
    cin >> n;

    for (i = 1, j = n; i <= n; ++i, --j) {
        sum += i * j;
    }

    cout << sum << endl;
    return 0;
}
