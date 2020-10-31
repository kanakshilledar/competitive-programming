// CODE : 1070
// LINK : https://cses.fi/problemset/task/1070

// // LOGIC
//     input an integer n
//     and output should be beautiful permutition if exists or NO SOLUTION.
    
//     CONDITION : a permutation is called beautiful if there are no adjacent elements whose difference is 1.
    
//     We just need to print first all the even numbers between 1..n and then all the odd numbers in decreasing order.
//         Eg: I/P : 5
//             O/P : 4 2 5 3 1

#include<bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll n;
    cin >> n;
    if (n == 2 or n == 3) cout << "NO SOLUTION" << endl;
    else {
        for (ll i = n - 1; i > 0; i -= 2) {
            cout << i << " ";
        }
        for (ll i = n; i > 0; i -= 2) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
