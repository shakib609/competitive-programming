#include <iostream>
using namespace std;

int main () {
    int m, n, count = 0;
    cin >> m >> n;
    while (m != 0 && n != 0) {
        m--;
        n--;
        if (count == 0)
            count = 1;
        else
            count = 0;
    }
    if (count == 0) cout << "Malvika\n";
    else cout << "Akshat\n";

    return 0;
}
