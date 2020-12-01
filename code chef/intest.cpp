#include <iostream>
using namespace std;

int main() {
	long int n, k;
	cin >> n >> k;
	int count = 0;
	int test;
	while(n > 0) {
		cin >> test;
		if (test % k == 0) {
			count ++;
		}

		n = n - 1;
	}

	cout << count;
	return 0;

}