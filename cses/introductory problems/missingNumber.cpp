// CODE : 1083
// LINK : https://cses.fi/problemset/task/1083

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