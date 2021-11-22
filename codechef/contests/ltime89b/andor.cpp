#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    boost;
    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        bool flag{false};
        ll a{1}, b{1};
        if (x == 1) cout << 0 << " " << 1 << endl;
        else {            
            for (ll i = 1; i < x; i++) {
                for(ll j = 1; j < x; j++) {
                    if ((i & 1 and j & 1) and ((i + j) == x) and flag == false) {
                        a = i;
                        b = j;
                        flag = true;
                        break;
                    }
                }
            }
            if (flag == true) cout << a << " " << b << endl;
            else if(flag != true) cout << -1 << endl;
        }
        
    }
    return 0;
}