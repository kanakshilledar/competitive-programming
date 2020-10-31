// CODE : 1068
// LINK : https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int

int main() {
    ll number;
    cin >> number;
    vector<ll> values;
    values.push_back(number);
    while (number != 1) {
        if (number & 1) {
            number = (number * 3) + 1;
            values.push_back(number);
        } else {
            number = number / 2;
            values.push_back(number);
        }
    }

    for (ll i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    cout << endl;
    return 0;
}