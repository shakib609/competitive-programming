#include<iostream>
using namespace std;

int main(void) {
    unsigned int n,
                i,
                j,
                k,
                tempsum = 0,
                temp = 1,
                sum = 0,
                counter = 1;
    cin >> n;

    for (i = 1; i <= n; ++i) {
        tempsum = 0;
        for (j = 1; j <= i; ++j) {
            temp = 1;
            for (k = 1; k <= j; ++k) {
                temp *= counter++;
            }
            tempsum += temp;
        }
        sum += tempsum;
    }
    cout << sum << endl;

    return 0;
}
