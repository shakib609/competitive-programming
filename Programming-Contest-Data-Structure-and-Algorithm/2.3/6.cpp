#include <iostream>
using namespace std;

int main(void) {
    int input, i;
    long int sum = 0;
    cin >> input;

    if (input > 0) {
        for(i = 1; i <= input; ++i)
            sum += i;
    }
    else {
        for(i = 1; i >= input; i--)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}
