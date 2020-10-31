// CODE : 1083
// LINK : https://cses.fi/problemset/task/1083

// // LOGIC
//     the first line of input contains an integer n and the second line contains (n - 1) integers and they are distinct
//     we need to print the missing number in the sequence.
//     for the missing number we can subtract the sum of input elements from the sum of 1...n numbers.
    

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long 

int main() {
    ll number;
    cin >> number;
    ll arr[number - 1];
    ll inpSum{0};
    for (ll i = 0; i < number - 1; i++) {
        cin >> arr[i];
        inpSum = inpSum + arr[i];
    }
    ll actSum = (number * (number + 1)) / 2;
    ll misNumber{0};
    misNumber = actSum - inpSum;
    cout << misNumber << endl;

    return 0;
}
