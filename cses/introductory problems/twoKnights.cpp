// CODE : 1072
// LINK : https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define sq(a) ((a) * (a))
#define ll long long int

int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)  {
        cout<<((sq(i)*(sq(i)-1)/2)-(8*(i-2)*(i-1)/2))<<'\n';
    }
    return 0;
}