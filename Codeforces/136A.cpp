#include <iostream>
using namespace std;

int main () {
    unsigned int n, temp, result[101] = { 0 };
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> temp;
        result[temp] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << result[i];
        if (i == n) cout << '\n';
        else cout << ' ';
    }

    return 0;
}