#include<stdio.h>
	const int ROW = 3;
	const int COL = 8;
void fill(int (*pma)[COL], int row) {
	int i, j;
	for(i = 0; i < row; i++) {
		for(j = 0; j < COL; j++) {
			pma[i][j] = i + j;
		}
	}
}


	int i, j;
	for(i = 0; i < row; i++) {
		for(j = 0; j < COL; j++)
			printf("%d\t", pm[i][j]);
		printf("\n");
	}
}

int main(void) {
	int multi[ROW][COL];

	fill(multi, ROW);

	print(multi, ROW);
	return 0;
}
