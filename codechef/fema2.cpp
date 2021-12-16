#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[n];
        // int magnetPos{0}, block{0}, ironPos{0}, magnet{0}, iron{0};
        int count{1};

        // for (int i = 0; i < n; i++) {
        //     if (str.at(i) == "M") magnetPos = i;
        //     if (str.at(i) == "I") 
        // }
        for (int i = 0; i < n; i++) {
            arr[i] = s.at(i);
        }

        for (int i = 0; i < n; i++) {
            // if (arr[i] == "X") count += 1;
            cout << arr[i];
        }

        cout << count << endl;
    }
    return 0;
}