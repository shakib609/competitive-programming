#include<cstdio>
#include<cstring>
using namespace std;

int main(void) {
    unsigned int n, temp, k, result = 1;
    char k_str[25];
    scanf("%u %s", &n, k_str);
    k = strlen(k_str);
    temp = n;
    while (temp >= k) {
        result *= temp;
        temp -= k;
    }
    if (n % k > 1)
        result *= n % k;
    printf("%u\n", result);
    return 0;
}
