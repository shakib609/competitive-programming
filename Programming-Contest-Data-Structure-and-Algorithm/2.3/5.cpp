#include <iostream>
using namespace std;

int main(void) {
    int x, y;
    cout << "Enter the coordinates of a point(x,y): ";
    cin >> x >> y;

    cout << "The point resides quadrant no. ";
    if (x >= 0) {
        if (y >= 0)
            cout << 1;
        else
            cout << 2;
    }
    else {
        if (y <= 0)
            cout << 3;
        else
            cout << 4;
    }
    cout << endl;

    return 0;
}
