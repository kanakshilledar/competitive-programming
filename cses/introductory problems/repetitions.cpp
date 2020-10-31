// CODE : 1069
// LINK : https://cses.fi/problemset/task/1069
// STATUS : Partially Correct

// LOGIC
    we have to input a string containing n characters and output the length of longest repetition in the entire string.
    we count the repetition in the string and replace the value of repeat variable. 

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    boost;
    string s;
    cin >> s;
    ll repeat{INT64_MIN}, rep{0};
    bool flag{false};

    for (ll i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1] or s[s.size() - 1] == s[s.size() - 2]) {
            rep += 1;
        }

        if (s[i] != s[i + 1]) {
            flag = true;
            if (rep > repeat) {
                repeat = rep;
                rep = 0;
            }
        }         
    }
    if (flag == true) {
        if (repeat == 0) cout << 1 << endl;
        else cout << repeat + 1 << endl;
    } else {
        cout << s.size() << endl;
    }
    // cout << flag;
    return 0;
}
