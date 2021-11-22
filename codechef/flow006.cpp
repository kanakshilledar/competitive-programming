#include <iostream>
using namespace std;

int main(){
	int testcase;
	long int n;
	int s = 0;
	cin >> testcase;
	while (testcase > 0) {
		cin >> n;
		while (n != 0){
			s = s + n % 10;
			n = n / 10;
		}
		cout << s << "\n";
		s = 0;

		testcase --;

	}

}
