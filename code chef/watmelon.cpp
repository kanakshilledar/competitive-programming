#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int testcase;
    cin >> testcase;
    while (testcase--) {
        int lengthSequence;
        cin >> lengthSequence;
        int sequence[lengthSequence];
        int sum = 0;
        for (int i = 0; i < lengthSequence; i++) {
            cin >> sequence[i];
            sum = sum + sequence[i];
        }

        if (sum == 0) {
            cout << "YES" << endl;
        } else {
            while (sum > 0) {
                sum = 0;
                for (int i = 0; i < lengthSequence; i++) {
                    sequence[i] = sequence[i] - (i + 1);
                }
                for (int i = 0; i < lengthSequence; i++) {
                    sum = sum + sequence[i];
                }
            }
            if (sum < 0) cout << "NO" << endl;
            else if (sum == 0) cout << "YES" << endl;
        }        
    }
    return 0;
}