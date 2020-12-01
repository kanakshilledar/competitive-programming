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
        ll ans = 0, sum = 0;
        while (n--) {
            ll ele;
            cin >> ele;
            ans |= ele;
            sum += ele;
            ans |= sum;
        }
        cout << ans << endl;
    }
    return 0;
}