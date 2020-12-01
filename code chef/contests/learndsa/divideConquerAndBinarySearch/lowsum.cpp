#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int t;
    cin >> t;
    while (t--) {
        int k, q;
        cin >> k >> q;
        vector <int> motivation(k), satisfaction(k);
        for (int i = 0; i < k; i++) cin >> motivation[i];
        for (int i = 0; i < k; i++) cin >> satisfaction[i];

        sort(motivation.begin(), motivation.end());
        sort(satisfaction.begin(), satisfaction.end());
        vector<int> sum;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                int temp;
                temp = motivation[i] + satisfaction[j];
                sum.push_back(temp);
            }
        }    
        sort(sum.begin(), sum.end());

        while (q--) {
            int query;
            cin >> query;
            cout << sum[query - 1] << endl;
        }    
    }
    return 0;
}