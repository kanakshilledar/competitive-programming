// #include <bits/stdc++.h>
// using namespace std;
// #define boost ios::sync_with_stdio(false); cin.tie(0)




// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int b[n];
//         for (int i = 0; i < n; i++) {
//             cin >> b[i];
//         }
        
//         // bool prime[n + 1];
//         // memset(prime, true, sizeof(prime));
//         // for (int p = n - 1; p * p <= 2 * n; p++) {
//         //     if (prime[p] == true) {
//         //         for (int i = p * p; i <= 2 * n; i += p) prime[i] = false;
//         //     }
//         // }
//         // for (int i = 0; i < n; i ++) {
//         //     if (b[i] % 2 == 0) {
//         //         b[i] = prime[i + n];
//         //     }
//         // }

//         // for (int i = 0; i < n; i++) {
//         //     cout << b[i] << " ";
//         // }
//         // cout << endl;
        
//         bool prime[n + 1];
//         memset(prime, true, sizeof(prime));

//         for (int p = 2; p * p <= n; p++) {
//             if (prime[p] == true) {
//                 for (int i = p * p; i <= n; i += p) prime[i] = false;
//             }
//         }

//         for (int p = 2; p <= n; p++) {
//             if (prime[p]) cout << p << " ";
//         }
//         cout << endl;
    
//     }
//     return 0;
// }


// ----------------

// #include <bits/stdc++.h>
// using namespace std;
// #define boost ios::sync_with_stdio(false); cin.tie(0)

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int b[n], a[n];
//         for (int i = 0; i < n; i++) cin >> b[i];
//         int count{0}, i{2}, num{1}, primeCount{0};
//         while (count < n) {
//             // i = 2;
//             num ++;
//             for (int j = 1; j <= i; j++) {
//                 if (num % i == 0) primeCount ++;
//             }
//             if (primeCount == 2) cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// -----------
#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b[n], a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int count, c
    }
}