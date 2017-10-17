#include<bits/stdc++.h>
using namespace std;

long long int nums[100005];

int lower_bound(int n, int value) {
    int begin = 0, end = n - 1, mid, temp;
    while (begin <= end) {
        mid = (begin + end) / 2;
        temp = nums[mid];
        if (temp == value)
            end = mid - 1;
        else if (temp > value)
            end = mid - 1;
        else
            begin = mid + 1;
    }
    return begin;
}

int upper_bound(int n, int value) {
    int begin = 0, end = n - 1, mid, temp;
    while (begin <= end) {
        mid = (begin + end) / 2;
        temp = nums[mid];
        if (temp > value)
            end = mid - 1;
        else
            begin = mid + 1;
    }
    return begin;
}


int main() {
    long long int cases, n, q, i, j, a, b, upper, lower;
    scanf("%lld", &cases);
    for (i = 1; i <= cases; ++i) {
        scanf("%lld %lld", &n, &q);
        for (j = 0; j < n; j++)
            scanf("%lld", &nums[j]);
        printf("Case %lld:\n", i);
        for (j = 0; j < q; j++) {
            scanf("%lld %lld", &a, &b);
            upper = upper_bound(n, b);
            lower = lower_bound(n, a);
            printf("%lld\n", upper - lower);
        }
    }
    return 0;
}
