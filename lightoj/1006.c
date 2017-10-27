#include <stdio.h>

unsigned long long int a, b, c, d, e, f;
unsigned long long int memo[10005];

unsigned long long int fn(int n) {
    if(!n) return a % 10000007;
    if(n == 1) return b % 10000007;
    if(n == 2) return c % 10000007;
    if(n == 3) return d % 10000007;
    if(n == 4) return e % 10000007;
    if(n == 5) return f % 10000007;
    if(memo[n] != -1)
        return memo[n];
    else
        memo[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % 10000007;
    return memo[n];
}

int main() {
    unsigned long long int n, i, caseno = 0, cases;
    scanf("%llu", &cases);
    while( cases-- ) {
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &c, &d, &e, &f, &n);
        for (i = 0; i < n + 1; ++i)
            memo[i] = -1;
        printf("Case %llu: %llu\n", ++caseno, fn(n));
    }
    return 0;
}
