#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {

	int n;
	string word[10];
	int alpha[26] = { 0 };
	int ans = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word[i];

		int cal = 1;

		for (int j = word[i].size()-1; j >-1; j--) {
			alpha[word[i][j] - 'A'] += cal;
			
			cal *= 10;
		}
	}

	sort(alpha, alpha + 26, greater<int>());

	for (int i = 0, n = 9; i < 10; i++, n--) {
		ans += alpha[i] * n;
	}

	cout << ans;

}