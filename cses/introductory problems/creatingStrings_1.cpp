// CODE : 1622
// LINK : https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    string s;
    cin >> s;
    vector<string> str;
    sort(s.begin(), s.end());
    do {
        str.emplace_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << str.size() << endl;
    for (ll i = 0; i < str.size(); i++) {
        cout << str[i] << endl;
    }

    return 0;
}