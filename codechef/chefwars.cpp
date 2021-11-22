// CODE: CHEFWARS
// the first line of input contains TESTCASE
// next line contains HEALTH and POWER

// the power gets half after every attack and the 
// health decreases by current attack power of the sword


// logic:
// 		health = 10;	power = 4;
// 		chef attacks with power 4 health becomes 6,
//		chef attacks with power 2 health becomes 4,
//		chef attacks with power 1 health becomes 3,
//		chef loses.
//
//		health = 10; 	power = 8
//		chef attacks with power 8 health becomes 2,
//		chef attacks with power 4 health becomes -2,
//		chef wins.

#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	int result;
	while (testcase > 0) {
		int health, power;
		cin >> health >> power;
		while (health > 0) {
			health = health - power;
			power = power / 2;
			if (power == 0 and health > 0) {
				result = 0;
				break;
			} else {
				result = 1;
			}
		}
		cout << result << '\n';
		testcase-- ;
	}
}