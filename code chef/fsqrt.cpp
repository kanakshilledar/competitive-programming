// // CODE: FSQRT
// 	first line of input contains testcase, following
// 	lines contain numbers. output is the sqrt of the
// 	input number

// 	logic:
// 		sqrt function is available in cmath library
// 		so we can find the sqrt by the following
// 		expression
// 			sqrt(number)
// 		by default sqrt returns floating point values
// 		so we need to store the result into an int
// 		variable. as we need the output in integer
// 		format.


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase --) {
		int number, result;
		cin >> number;
		result = sqrt(number);
		cout << result << endl;
	}
	return 0;
}