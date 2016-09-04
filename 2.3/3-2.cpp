#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Biggest of the three is: ";
    if (a > b) {
        if (a > c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b > c)
            cout << b;
        else
            cout << c;
    }
    cout << endl;

    return 0;
}
