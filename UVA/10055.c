#include<stdio.h>

int main() {

    unsigned long int a, b;
    while(scanf("%lu %lu", &a, &b) == 2) {
        if(a > b)
            printf("%lu", a - b);
        else
            printf("%lu", b - a);
        printf("\n");
    }
    return 0;
}
