// code: wrdvls
// contest: start20c
#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> inds(n + 1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x <= n) inds[x].push_back(i);
    }

    ll ans = 0;
    for (int x = 1; x <= n; x++) {
        vector<int> indsx = inds[x];
        indsx.insert(begin(indsx), 0);
        indsx.push_back(n + 1);
        for (int i = 1; i < int(size(indsx)) - x; i++)
            ans += (ll) x * (indsx[i] - indsx[i - 1]) * (indsx[i + x] - indsx[i + x - 1]);
    }
    
    cout << ans << "\n";
}

int main() {
    boost;
    ll t;
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}
