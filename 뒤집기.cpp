#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;


int main() {

	string s;
	int ans = 0;
	cin >> s;

	for (int i = 0; i < s.size()-1; i++) {

		if (s[i] != s[i+1]) {
			ans += 1;
		}

	}

	if (ans % 2 == 0 && ans != 0)
		ans -= 1;

	cout << ans;
}