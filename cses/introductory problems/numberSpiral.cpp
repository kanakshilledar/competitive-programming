// CODE : 1071
// LINK : https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll t, x, y;
    cin >> t;

    while (t--) {
        cin >> y >> x;
        if (x > y) {
            if (x % 2 == 1) cout << x * x - y + 1;
            else cout << (x - 1) * (x - 1) + y;
        } else {
            if (y % 2 == 0) cout << y * y - x + 1;
            else cout << (y - 1) * (y - 1) + x;
        }

        cout << endl;
    }
    return 0;
}