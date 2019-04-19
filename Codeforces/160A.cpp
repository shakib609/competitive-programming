#include <iostream>
using namespace std;

void sort_descending(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n -1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main() {
	int n, i, coins[101] = {0}, sum = 0, half, result_sum = 0, count = 0;
	cin >> n;

	for(i = 0; i < n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}

	half = sum / 2;

	sort_descending(coins, n);

	for (i = 0; i < n; i++) {
		result_sum += coins[i];
		count++;
		if (result_sum > half)
			break;
	}

	cout << count << '\n';

	return 0;
}