#include<cstdio>


int main() {
    char str[1002];
    scanf("%s", str);
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] -= 32;
    }
    printf("%s\n", str);
    return 0;
}
