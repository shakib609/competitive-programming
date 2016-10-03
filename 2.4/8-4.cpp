// 12321
// .121.
// ..1..


#include<iostream>
using namespace std;

int main(void) {
    unsigned int n, i, j;

    cin >> n;

    for (i = 1; i <= n; ++i) {
        for (j = 1; j < i; ++j)
            cout << '.';
        for(j = 1; j <= n - i + 1; ++j)
            cout << j;
        for (j -= 2; j >= 1; --j)
            cout << j;
        for (j = 1; j < i; ++j)
            cout << '.';
        cout << endl;
    }

    return 0;
}
