#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int solve(int l, int p, int v);

int main() {

	int l, p, v, n = 1;
	int ans[10000] = { 0 };
	while (1) {

		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		ans[n] = solve(l, p, v);

		n += 1;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << "Case " << i + 1 << ": " << ans[i + 1] << "\n";
	}
}

int solve(int l, int p, int v) {

	int ans = 0;

	int a = v / p;
	int b = v % p;

	if (l < b)
		b = l;

	ans = (a * l) + b;

	return ans;
}

