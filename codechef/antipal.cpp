// code: antipal
// contest: start20c
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t{};
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n & 1)
            cout << -1;
        else { 
            for (int i = 1; i < n/2; i++) 
                cout << "1";
            for (int i = n/2; i <= n; i++) 
                cout << "0";
        }
        cout << "\n";
    }
    return 0;
}

