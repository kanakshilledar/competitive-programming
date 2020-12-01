#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    boost;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll ans = 0;
        ll l;
        for (l = 0; l <= ans; l++) {
            for (ll i = n - 1; i > ans and i > 1; i++) {
                if (__gcd(arr[l], arr[i]) != 1) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}