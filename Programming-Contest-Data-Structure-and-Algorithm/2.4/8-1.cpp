// *..
// **.
// ***

#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, i, j;
    cin >> n;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j <= i; ++j)
            cout << "*";
        for (j = 1; j <= n - i; ++j)
            cout << ".";
        cout << endl;
    }

    return 0;
}
