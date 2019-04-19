#include <iostream>
using namespace std;

int search_letter(string str, int length, int start_index, char letter) {
	int i;
	for (i = start_index; i < length; i++)
		if (str[i] == letter) return i;
	return -1;
}

int main()
{
	string str, word = "hello";

	cin >> str;

	int n = str.length();
	int n_word = word.length();

	if (n >= n_word) {
		int  word_index = 0, next_index = 0;
		bool flag = true;
		for (int i = 0; i < n; i++) {
			if (word_index > 4) break;
			char ch = word[word_index++];
			int temp = search_letter(str, n, next_index, ch);
			
			if (temp >= 0) {
				next_index = temp + 1;
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag == true) cout << "YES\n";
		else cout << "NO\n";
	}
	else cout << "NO\n";

	return 0;
}