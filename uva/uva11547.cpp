#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n = 0;
		cin >> n;

		n = ((((((n*567)/9)+7492)*235)/47)-498);
		n /= 10;
		cout << abs(n % 10) << endl;
	}
}