#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long
#define inf 9e18

int main() {
    boost;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = inf;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ll other = n / i;
                if (other != i) {
                    ll y = (other + i) / 2, x = y - i;
                    if (n + x * x == y * y) ans = min(ans, x);
                }
            }
        }
        if (ans == inf) cout << -1 << endl;
        else cout << ans * ans << endl;
    }
    return 0;
}