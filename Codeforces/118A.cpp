#include <iostream>
using namespace std;

char tolower(char ch) {
	return ch <= 90 && ch >= 65 ? ch + 32 : ch;
}

int main()
{
	unsigned int n, i, j;
	bool flag;
	string str, vowels = "aeiouy";
	char ch;

	cin >> str;
	n = str.length();

	for (i = 0; i < n; i++) {
		ch = tolower(str[i]);
		flag = 0;

		for (j = 0; j < 6; j++)
			if (ch == vowels[j]) flag = 1;

		if (flag) continue;
		else
			cout << '.' << ch;
	}
	cout << '\n';
	return 0;
}