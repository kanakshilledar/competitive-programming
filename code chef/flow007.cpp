// // CODE: FLOW007
// 	first line of input contais testcases, the
// 	the following lines contain number

// 	output contains the reversed number

// 	logic:
// 		here we need to extract the digits from the 
// 		input number and then add them according to
// 		their position to form the reversed number

// 		we take the input number in number and the 
// 		reversed number is in the variable
// 		reverse_number
// 		then we use the expression following expression
// 			reverse_number = reverse_number * 10 + number % 10;
// 		for reducing the number we use
// 			number = number / 10;		



#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	while (testcase --) {
		int number, reverse_number = 0, temp = 0;
		cin >> number;

		while (number != 0) {
			reverse_number = reverse_number * 10 + number % 10;
			number = number / 10;
		}
		cout << reverse_number << endl;

	}
}