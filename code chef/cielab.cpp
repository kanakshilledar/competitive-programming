#include <iostream>
using namespace std;

int main() {
	int a, b, diff;
	cin >> a >> b;
	if (a > b) {
		diff = a - b;
		if (diff % 10 == 1 or diff % 10 == 0) {
			diff ++;
		} else {
			diff --;
		}
	}
	cout << diff << endl;
	return 0;
}