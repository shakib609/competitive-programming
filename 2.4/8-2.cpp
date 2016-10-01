// ***
// .**
// ..*

#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, i, j;
    cin >> n;

    for (i = n; i >= 1; --i) {
        for (j = 1; j <= n - i; ++j)
            cout << ".";
        for (j = 1; j <= i; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}
