#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase --) {
        int number, digit;
        cin >> number;

        while (number != 0) {
            digit = number % 10;
            number = number / 10;
            cout << digit ;
            
        }
        cout << '\n';
    }
    return 0;
}
