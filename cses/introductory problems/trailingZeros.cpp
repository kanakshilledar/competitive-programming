// CODE : 1618
// LINK : https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int n, cnt = 0;
    cin >> n;
    for(int i = 5; i <= n; i *= 5) cnt += n / i;
    cout << cnt << endl;
    return 0;
}