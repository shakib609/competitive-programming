#include<iostream>
using namespace std;


unsigned int is_prime(unsigned int n, unsigned int PRIMES[], unsigned int PRIMES_LENGTH) {
    unsigned int i;
    for (i = 0; i < PRIMES_LENGTH; ++i) {
        if (n % PRIMES[i] == 0) {
            return 0;
        }
    }
    return 1;
}


void calculate_prime(unsigned int input, unsigned int PRIMES[], unsigned int *PRIMES_LENGTH) {
    unsigned int i;
    while (*PRIMES_LENGTH != input) {
        i = PRIMES[*PRIMES_LENGTH - 1] + 1;
        while (!is_prime(i, PRIMES, *PRIMES_LENGTH))
            ++i;
        PRIMES[*PRIMES_LENGTH] = i;
        *PRIMES_LENGTH += 1;
    }
    cout << PRIMES[*PRIMES_LENGTH - 1] << endl;
}


int main(void) {
    unsigned int k, input, i;
    unsigned int PRIMES[15000] = {2};
    unsigned int PRIMES_LENGTH = 1;
    cin >> k;

    while (k--) {
        cin >> input;

        if (PRIMES[input - 1])
            cout << PRIMES[input - 1] << endl;
        else
            calculate_prime(input, PRIMES, &PRIMES_LENGTH);
    }

    return 0;
}
