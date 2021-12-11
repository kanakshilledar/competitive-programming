#include <bits/stdc++.h>
using namespace std;

int main () {
    int t{};
    cin >> t;
    while (t--) {
        int n{};
        cin >> n;
        int p[n];
        p[0] = n;
        for (int i = 1; i < n; i++) 
            p[i] = i;
        for (int i = 0; i < n; i++) 
            cout << p[i] << " ";
        cout << "\n";
    }
    return 0;
}
