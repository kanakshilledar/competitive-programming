// CODE : 1621
// LINK : https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll n;
    cin >> n;
    set<ll> x;
    while (n--) {
        ll a;
        cin >> a;
        x.insert(a);
    }

    cout << x.size() << endl;
    return 0;
}