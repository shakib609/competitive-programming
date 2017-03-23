#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int height, width;
} rectangle_t;

int main(void) {
	rectangle_t two[2];
	two[0].height = 100;
	two[0].width = 10;
	printf("Number 1's height: %d, width: %d\n", two[0].height, two[0].width);
	two[1].height = 200;
        two[1].width = 20;
        printf("Number 2's height: %d, width: %d\n", two[1].height, two[1].width);

	return 0;
}
