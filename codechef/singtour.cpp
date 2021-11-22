#include <iostream>
using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	while (testcases --) {
		int number_singers;
		cin >> number_singers;

		int limits[number_singers][2];
		for (int i = 0; i < number_singers; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> limits[i][j];
			}
		}

		for (int i = 0; i < number_singers; i++) {
			for (int j = 0; j < 2; j++) {
				cout << limits[i][j];
			}
		}

		cout << "-------------" << endl;
		cout << limits << endl;

	}
}