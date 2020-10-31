// CODE : 1617
// LINK : https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    boost;
    ll n, ans{1}, mod = 1e9 + 7;
    cin >> n;
    for (ll i = 0; i < n; i ++) {
        ans = (ans * 2) % mod;
    }
    cout << ans;
    return 0;
}