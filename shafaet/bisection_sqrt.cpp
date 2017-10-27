#include<bits/stdc++.h>
using namespace std;


double sqrt(double x) {
    if (x < 0)
        return -1;
    double low = 0, high = x, mid, temp;
    while (high - low >= 0.000001) {
        mid = (low + high) / 2.0;
        temp = mid * mid;
        if (temp == x)
            return mid;
        else if(temp > x)
            high = mid;
        else
            low = mid;
    }
    return mid;
}

int main() {
    cout << "Enter x: ";
    double x;
    cin >> x;
    printf("Root: %.4f\n", sqrt(x));
    return 0;
}
