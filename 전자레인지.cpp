#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int t;
	int a, b, c;
	int A = 300, B = 60, C = 10;

	cin >> t;

	a = t / A;
	t %= A;

	b = t / B;
	t %= B;

	c = t / C;
	t %= C;

	if (t == 0)
		cout << a << " " << b << " " << c;
	else
		cout << -1;
}