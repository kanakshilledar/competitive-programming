#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase --) {
		int number_cards, ways{1};
		cin >> number_cards;
		int cards[number_cards];
		if (number_cards <= 200) {
			for (int i = 0; i < number_cards; i++) {
				cin >> cards[number_cards];
			}

			
			if (number_cards % 2 == 0) {
				ways = pow(2, number_cards);

				cout << ways << endl;
			} else if (number_cards = 1 or (number_cards = 2 and cards[0] == cards[1])) {
				ways = 2;
				cout << ways << endl;
			} else if (number_cards % 2 != 0) {
				// for (int i = 1; i <= number_cards; i ++) {
				// 	ways = ways * i;				
				// }
				ways = 2 * number_cards;
				cout << ways << endl;
			}
		}

	}
	return 0;
}