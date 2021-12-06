#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n{}, k{}, x{}, count{0};
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> x;
            x += k;
            if (x % 7 == 0) 
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
