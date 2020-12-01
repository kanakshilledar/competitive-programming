#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int a, b, remainder;
	while (testcase > 0) {
		cin >> a >> b;
		if (b > 0) {
			remainder = a % b;
			cout << remainder << endl;
		}
		testcase --;
	}
	return 0;
}