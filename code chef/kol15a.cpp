#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase --) {
		string alphanum;
		cin >> alphanum;

		int sum{0};
		for (int i = 0; i < strlen(alphanum); i++) {
			if (isdigit(stoi(alphanum[i]))) {
				sum = sum + alphanum[i];
			}
		}
		cout << sum;


	}
}