#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	while (testcase --) {
		int l, r, array_length;

		cin >> l >> r;
		array_length = r - l + 1;
		int array[array_length];
		for (int i = 0; i < array_length; i++) {
			array[i] = i + l;
		}

		int count{0};
		
		for (int i = 0; i < array_length; i++) {
			if (array[i] % 10 == 2 or array[i] % 10 == 3 or array[i] % 10 == 9) {
				count = count + 1;
			}
		}

		cout << count << endl;


	}
}