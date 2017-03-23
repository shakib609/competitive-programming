#include <iostream>
using namespace std;

#define SQUARE(x) (x)*(x)*(x)

int main() {
    unsigned int n, result = 0;
    cin >> n;
    while (n--) {
        result += SQUARE(n + 1);
    }
    cout << "Result: " << result << endl;
    return 0;
}
