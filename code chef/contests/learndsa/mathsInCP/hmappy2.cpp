#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, a, b, k;
        cin >> n >> a >> b >> k;
        ll countA{0}, arr[n], countB{0};
        for (ll i = 0; i < n; i++) arr[i] = i + 1;
        for (ll i = 0; i < n; i++) {
            if (arr[i] % a == 0 and arr[i] % b != 0) countA ++;
            if (arr[i] % a != 0 and arr[i] % b == 0) countB ++;
        }
        int count = countA + countB;
        if (count >= k) cout << "Win" << endl;
        else cout << "Lose" << endl;
    }
    return 0;
}



// 1 2 3 4 5 6
