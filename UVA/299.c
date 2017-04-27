#include<stdio.h>

int main() {
    unsigned int cases, n, temp, i, j, c, nums[55];
    scanf("%u", &cases);
    while (cases--) {
        scanf("%u", &n);
        c = 0;
        for (i = 0; i < n; ++i)
            scanf("%u", &nums[i]);
        if (n > 0) {
            for (i = 0; i < n - 1; ++i) {
                for (j = 0; j < n - i -1; ++j) {
                    if (nums[j] > nums[j + 1]) {
                        c++;
                        temp = nums[j];
                        nums[j] = nums[j + 1];
                        nums[j + 1] = temp;
                    }
                }
            }
        }
        printf("Optimal train swapping takes %u swaps.\n", c);
    }
    return 0;
}
