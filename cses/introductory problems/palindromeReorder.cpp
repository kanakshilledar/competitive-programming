// CODE : 1755
// LINK : https://cses.fi/problemset/task/1755

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    string s;
    cin >> s;
    int cnt[26] = {}, odd = 0;
    for (char c : s) cnt[c - 'A']++;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] & 1) odd++ ;
    }

    if (odd > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string first = "", middle = "", last = "";
    for (int i = 0; i < 26; i++) {
        if ((cnt[i] & 1) ^ 1) {
            for (int j = 0; j < cnt[i] / 2; j++) {
                first += (char)('A' + i);
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] & 1) {
            for (int j = 0; j < cnt[i]; j++) {
                middle +=(char)('A' + i);
            }
        }
    }
    last = first;
    reverse(last.begin(), last.end());
    cout << first + middle + last << endl;
    return 0;
}