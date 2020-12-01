#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int rounds;
	cin >> rounds;
	int player_one[rounds], player_two[rounds], lead[rounds];
	int iterator = rounds;
	while (iterator --) {
		for (int i = 0; i < rounds; i ++) {
			cin >> player_one[i];
			cin >> player_two[i];
		}

		for (int i = 0; i < rounds; i++) {
			lead[i] = player_one[i] - player_two[i];
		}
		sort(lead, lead + rounds);

		if (lead[0] > lead[rounds - 1]) {
			cout << 2 << ' ' << (lead[0] * (-1)) << endl;
			break;
		} else if (lead[0] < lead[rounds - 1]) {
			cout << 1 << ' ' << lead[rounds - 1] << endl;
			break;
		}
	}
	return 0;
}