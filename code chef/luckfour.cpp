// CODE: LUCKFOUR

// logic:
// 		we input the number then we find the digit
//		   in the number which is equal to 4.
//
//		   input number is stored in number, digits are
//		   stored in digit. counter is stored in count 
//		   which is assigned an initial value 0.
//		   we take the digit from the number by 
//		 	digit = number % 10;
//		   and the reduce the number to 
//		 	number = number / 10;
//		   if digit == 4 
//	 		then count increments
//		   after checking all the digits
//		   count is printed.

#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	while (testcase --) {
		int number, count = 0, digit;
		cin >> number;

		while (number != 0) {
			digit = number % 10;
			number = number / 10;
			if (digit == 4) {
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}