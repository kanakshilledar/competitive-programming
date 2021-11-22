// // #include <bits/stdc++.h>
// // using namespace std;
// // #define boost ios::sync_with_stdio(false); cin.tie(0)
// // #define ll long long

// // int main() {
// //     boost;
// //     ll t;
// //     cin >> t;
// //     while (t--) {
// //         ll n, q;
// //         cin >> n >> q;
// //         ll arr[n];
// //         for (ll i = 0; i < n; i++) {
// //             cin >> arr[i];
// //         }

// //         while (q--) {
// //             ll x, y;
// //             cin >> x >> y;
// //             arr[x - 1] = y;
// //             ll good{0};
// //             for (ll i = 0; i < n; i++) {
// //                 good += 1;
// //                 if (arr[i] == arr[i + 1]) {
// //                     break;
// //                 }                
// //             }
// //             cout << good << endl;
            
// //         }

// //         // ll x, y;
// //         // cin >> x >> y;
// //         // arr[x - 1] = y;
// //         // ll good{0};
// //         // for (ll i = 0; i < n; i++) {
// //         //     good += 1;
// //         //     if (arr[i] == arr[i + 1]) {
// //         //         break;
// //         //     }                
// //         // }
// //         // cout << good << endl;
// //     }
// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// int main() {
//  // your code goes here
//  bool z{true};
//  while(z) {z = false;}
//  int t;
//  cin>>t;
//  while(t--)
//  {
//      int n,q;
//      cin>>n>>q;
//      int arr[n];
//      for(int i=1;i<=n;i++)
//      cin>>arr[i-1];
//      for(int i=1;i<=q;i++)
//      {
//          int x,y;
//          cin>>x>>y;
//          arr[x-1]=y;
//          int count=0;
//          int pre=0;
//          for(int j=1;j<=n;j++)
//          {
//              if(arr[j-1]!=pre)
//              {
//                  count+=1;
//                  pre=arr[j-1];
//              }
           
//             // cout<<count<<" ";
             
//          }
//          cout<< count <<'\n';
         
//      }
//  }
//  return 0;
// }


#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll testcase;
    cin >> testcase;
    while (testcase--)
    {
        ll n, q, x, y, count, t;
        cin >> n >> q;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        count = 1, t = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
                count++;
            else
                continue;
            t = max(count, t);
        }
        while (q--)
        {
            cin >> x >> y;
            if (a[x - 1] != y)
            {
                ll t1 = 0;
                if (x - 2 >= 0 && a[x - 2] == a[x - 1])
                    t1++;
                if (x < n && a[x - 1] == a[x])
                    t1++;
                a[x - 1] = y;
                if (x - 2 >= 0 && a[x - 2] == a[x - 1])
                    t1--;
                if (x < n && a[x - 1] == a[x])
                    t1--;
                t += t1;
            }
            cout << t << endl;
        }
    }
}