// CODE : 1754
// LINK : https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll testcase;
    cin >> testcase;
    while (testcase --) {
        ll a, b;
        cin >> a >> b;
        ll check;
        check = (a + b) % 3;
        // if (check == 0 and ((a - b) <= 3 or (b - a) <= 3)) cout << "YES" << endl;
        if (check == 0 and 2 * a >= b and 2 * b >= a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}   