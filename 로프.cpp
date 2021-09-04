#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int n;

	cin >> n;

	int rope[100001];
	int ans = 0 , max = 0;


	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}

	sort(rope, rope + n);

	for (int i = 0; i < n; i++) {
		if (ans < rope[i] * (n-i))
			ans = rope[i] * (n-i);
	}

	cout << ans;

}
