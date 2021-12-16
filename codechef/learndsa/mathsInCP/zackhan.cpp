#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, b;
        cin >> l >> b;
        int area{l * b};
        int reqArea{1}, side;
        for (int i = 1; i * i < area; i++) {
            if (reqArea < area) reqArea = i * i;
            else {
                reqArea = ((i - 1) * (i - 1));
                break;
            }
        }
        cout << sqrt(reqArea) << endl;
    }
}