#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    priority_queue<int> p;
    
    for (int i=1;i<=m+n;i++) {
            ll X;
            cin>>X;
            if (X!=-1)p.push(X);
            else {
                    cout<<(p.top())<<endl;
                    p.pop();
            }
    }
    return 0;
}