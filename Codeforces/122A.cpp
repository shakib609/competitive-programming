#include <iostream>
using namespace std;


int main() {
    unsigned int perfect_numbers[12] = {4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777};
    unsigned int n;
    cin >> n;

    bool flag = false;
    for(int i = 0; i < 12; i++) {
        if (n % perfect_numbers[i] == 0) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}