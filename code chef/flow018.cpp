#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll t{  };
    cin >> t;
    while (t--) {
        ll n{  }, fact{ 1 };
        cin >> n;
        for (ll i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << fact << "\n";
    }
    return 0;
}
