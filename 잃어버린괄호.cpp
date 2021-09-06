#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;


int main() {

	string s;
	string temp = "";
	int ans = 0, f = 0;

	cin >> s;

	for (int i = 0; i <= s.size(); i++) {

		if (s[i] == '-' || s[i] == '+' || s[i] == '\0') {

			if (f == 1) {
				ans += -stoi(temp);
			}
			else {
				ans += +stoi(temp);
			}

			if (s[i] == '-' )
				f = 1;
			temp = "";
			continue;
		}

		temp += s[i];
	}
	cout << ans;
}