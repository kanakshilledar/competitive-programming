#include <bits/stdc++.h>
using namespace std ;
#define boost ios::sync_with_stdio(0);cin.tie(0)
#define ll long long 

int main (){
    boost ;
    ll t ;
    cin >> t ;
    while (t--)
    {
        ll overs,bowler,maxover ;
        cin >> overs >> bowler >> maxover ;
        ll temp = bowler ;
        if(bowler * maxover < overs) cout << -1 << '\n';
        else
        {
            if(bowler == 1 and overs > 1) {cout << -1 << '\n' ; }
            else
            {
                ll arr [overs] ;
            for (ll i = 0; i < overs; i++)
            {
                if(bowler == 0)bowler = temp ;
                arr[i] = bowler ;
                bowler -- ;
            }
            for (ll i = 0; i < overs; i++)
            {
                cout << arr[i] << " ";
            }
            cout << '\n';
            
            }
    

        }
        
    }
    


    return 0 ;
}