#include<iostream>

using namespace std;

int main() {

	int n, k;
	int coin[10];
	int ans = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int x; 
		cin >> x;
		coin[i] = x;
	}
	
	for (int i = n - 1; i >= 0; i--) {
		ans += k / coin[i];
		k = k % coin[i];
	}

	
	cout << ans;

	return 0;
}