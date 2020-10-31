// CODE : 1070
// LINK : https://cses.fi/problemset/task/1070

#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll n;
    cin >> n;
    if (n == 2 or n == 3) cout << "NO SOLUTION" << endl;
    else {
        for (ll i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (ll i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}