#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	long n;
	long distance[100001];
	long price[100001];
	long ans = 0, now_price;

	cin >> n;

	for (int i = 0; i < n-1; i++) {
		cin >> distance[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}
	
	ans += price[0] * distance[0];
	now_price = price[0];

	for (int i = 1; i < n-1; i++) {
		if (now_price < price[i]) {
			ans += now_price * distance[i];
		}
		else {
			ans += price[i] * distance[i];
			now_price = price[i];
		}
	}
	cout << ans;
}
