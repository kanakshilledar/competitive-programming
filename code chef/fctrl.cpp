// // CODE : FCTRL
// first line of input contains the testcases and the
// next following lines contains the numbers whose
// zeros are needed to be found
// 	logic:
// 		we input the number and then determine how
// 		many zeros does it have. for finding zeros
// 		we will first divide the whole number by 5
// 		and then repeat that again untill we get a
// 		number less than 1 and on every iteration 
// 		we add the quotient to the variable zeros 
// 		which gives the number of zeros.


#include <iostream>
using namespace std;

int main() {
    long int testcase;
    cin >> testcase;
    long long int num{0};
    long long int zeros{0};
    while (testcase --) {
        cin >> num;

        while (num / 5 >= 1) {
            num = num / 5;
            zeros = zeros + num;

        }

        cout << zeros << endl;
        zeros = 0;
    }
    return 0;
}