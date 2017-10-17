#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, result;
    while (1) {
        result = 1;
        cin >> n;
        if (n < 0)
            break;
        result += (n * (n + 1)) / 2;
        cout << result << endl;
    }
}
