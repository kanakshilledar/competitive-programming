#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(flase); cin.tie(0)

int main() {
    int testcase;
    cin >> testcase;
    while (testcase --) {
        int gamesPlayed;
        cin >> gamesPlayed;
        while (gamesPlayed--) {
            int initialState, numberCoins, headTail;
            cin >> initialState >> numberCoins >> headTail;
            if (numberCoins % 2 == 0) {
                cout << numberCoins / 2 << endl;
            } else {
                if (initialState == headTail) {
                    cout << numberCoins / 2 << endl;
                } else {
                    cout << (numberCoins % 2) + (numberCoins / 2) << endl;
                }
            }
        }
    }
    return 0;
}
