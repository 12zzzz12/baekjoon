#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	long long s;
	long long n=1, sum=0;

	cin >> s;

	while (1) {
		sum += n;
		if (sum > s) {
			cout << n - 1;
			break;
		}
		n += 1;
	}
}