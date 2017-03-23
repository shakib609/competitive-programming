#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Bigger of the two is: ";
    if (a >= b)
        cout << a;
    else
        cout << b;
    cout << endl;
    return 0;
}
