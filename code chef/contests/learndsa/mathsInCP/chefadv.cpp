#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define const int mx=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,m,x,y;cin>>n>>m>>x>>y;
        if((n>=2 and m>=2 and (n-2)%x==0 and (m-2)%y==0) or ((n-1)%x==0 and ((m-1)%y==0)))
            cout<<"Chefirnemo"<<endl;
        else cout<<"Pofik"<<endl;
    }
	return 0;
}
