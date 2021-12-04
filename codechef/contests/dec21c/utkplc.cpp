#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int t;
    cin >> t;
    while (t--) {
        char first, second, third, x, y;
        cin >> first >> second >> third;
        cin >> x >> y;

        if (first == x || first == y) 
            cout << first << "\n";
        else if (second == x || second == y) 
            cout << second << "\n";
        else 
            cout << third << "\n";
    }
    return 0;
}
