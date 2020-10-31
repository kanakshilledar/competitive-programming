// CODE : 1092
// LINK : https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int

int main() {
    boost;
    ll n;
    cin >> n;
    ll sum;
    sum = n * (n + 1) / 2;
    ll halfSum = sum / 2;
    if (sum & 1) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        
        vector<ll> left, right;
        // halfSum  = sum / 2;
        while(n) {
            if (halfSum >= n) {
                left.push_back(n);
                halfSum -= n;
            }
            else right.push_back(n);
            n--;
        }
        cout << left.size() << endl;
        for (ll i = 0; i < left.size(); i++) {
            cout << left[i] << " ";
        }
        cout << endl;
        cout << right.size() << endl;
        for (ll i = 0; i < right.size(); i++) {
            cout << right[i] << " ";
        }
        cout << endl;
        
    } 

    return 0;
}