#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >>n >>k;
        char s[n + 1];
        cin >> s;
        int c1 = 0, c = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                c++;
                if(c >= k){
                    c1++;
                    c = 0;
                }
            }
            else {
                c = 0;
            }
        }
        cout << c1 << endl;
    }
	return 0;
}
