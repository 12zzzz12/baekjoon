#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int main() {

	int n;
	priority_queue<int, vector<int>, greater<int>> q;
	int ans = 0 , total = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		q.push(num);
	}

	while (!q.empty()) {

		int x = q.top(); q.pop();
		int y = q.top(); q.pop();
		int z = x + y;
		ans += z;
		if (!q.empty()) {
			q.push(z);
		}

	}


	cout << ans;
}