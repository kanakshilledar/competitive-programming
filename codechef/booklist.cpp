#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll numberBooks;
    cin >> numberBooks;
    vector<ll> books;
    for (ll i = 0; i < numberBooks; i++) {
        ll x;
        cin >> x;
        books.push_back(x);
    }
    ll numberEntry;
    cin >> numberEntry;
    vector<ll> entry;
    for (ll i = 0; i < numberEntry; i++) {
        ll x;
        cin >> x;
        entry.push_back(x - 1);
    }

    for (ll i = 0; i < numberEntry; i++) {
        cout << books[entry[i]] << endl;
        books.erase(books.begin() + entry[i]);
    }
}