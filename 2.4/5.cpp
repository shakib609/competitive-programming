#include<iostream>
using namespace std;

int main(void) {
    unsigned int i;
    int sum = 0, n;
    cin >> n;

    for (i = 1; i <= n; i += 2) {
        sum += i;
    }
    for (i = 2; i <= n; i += 2) {
        sum -= i;
    }
    cout << sum << endl;
    return 0;
}
