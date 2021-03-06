// CODE : 1094
// LINK : https://cses.fi/problemset/task/1094

// // LOGIC
//     in first line we need to print the size of array
//     and in the next line we input elements into the array
    
//     we need to print the minimum number of turns required to convert the array in increasing order.
       
//     we add a difference between the adjacent elements of the array to a variable turns

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll arr[n];
    ll turns{0};
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (ll i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            turns += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << turns << endl;
    return 0;
}
