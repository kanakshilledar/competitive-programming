// code: BRTXORS
// contest: start20c
#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define modulo 1000000007
#define ll long long
int main () {
    boost;
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        if (n == 2)
            cout << "2" << "\n";
        // for power of 2
        else if ((n & (n - 1)) == 0)
            cout << (2* n - 1) % modulo << "\n";
        else {
            ll bit = log2(n);
            ll ans = pow(2, bit + 1);
            cout << ans % modulo << "\n";
        }
    }
    return 0;
}
