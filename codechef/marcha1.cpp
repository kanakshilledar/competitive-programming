#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum, s = 0;
        bool b = false;
        cin >> n >> sum;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int si = pow(2, n);
        for (int i = 0; i < si; i++) {
            s = 0;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    s += arr[j];
                }
            }
            if (sum == s) {
                b = true;
                break;
            }
        }
        if (b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}