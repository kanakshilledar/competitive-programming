#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int a, b, sum{0};
	while (testcase > 0) {
		cin >> a >> b;
		sum = a + b;
		cout << sum << "\n";

		testcase --;
	}
}