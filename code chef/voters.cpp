// #include <bits/stdc++.h>
// using namespace std;
// #define boost ios::sync_with_stdio(false); cin.tie(0)

// int main() {
//     int voter_1, voter_2, voter_3;
//     cin >> voter_1 >> voter_2 >> voter_3;
//     int list_1[voter_1], list_2[voter_2], list_3[voter_3];
//     for (int i = 0; i < voter_1; i++) {
//         cin >> list_1[i];
//     }
//     for (int i = 0; i < voter_2; i++) {
//         cin >> list_2[i];
//     }
//     for (int i = 0; i < voter_3; i++) {
//         cin >> list_3[i];
//     }
//     cout << 1;
//     vector<int> votersList;
//     // checking common elements
//     cout << 1;
//     for (int i = 0; i < voter_1; i++) {
//         for (int j = 0; i < voter_2; j++) {
//             if (list_1[i] == list_2[j]) votersList.push_back(list_1[i]);
//         }
//     }
//     for (int i = 0; i < voter_1; i++) {
//         for (int j = 0; j < voter_3; j++) {
//             if (list_1[i] == list_3[j]) votersList.push_back(list_1[i]);
//         }
//     }
//     for (int i = 0; i < voter_2; i++) {
//         for (int j = 0; j < voter_3; j++) {
//             if (list_2[i] == list_3[j]) votersList.push_back(list_2[i]);
//         }
//     }
//     auto last = unique(votersList.begin(), votersList.end());
//     votersList.erase(last, votersList.end());
//     sort(votersList.begin(), votersList.end());
//     cout << votersList.size() << endl;
//     for (int i: votersList) {
//         cout << i << endl;
//     }
//     cout << 1;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std ;
#define boost ios::sync_with_stdio(0);cin.tie(0)
#define ll long long

int main(){

boost ;
ll n1,n2,n3,n ;
cin >> n1 >> n2 >> n3 ;
n = n1+n2+n3 ;
ll arr[n];
for(ll i = 0; i < n ; i++){
    cin >> arr[i] ;

}
vector <ll> v ;
ll count{1},first_elmt;
sort(arr,arr+n);
first_elmt = arr[0];
for(ll i =1;i<n;i++){
    if(first_elmt == arr[i]){
        count ++ ;
    }
    else{
        if(count >= 2)
        {
            v.push_back(first_elmt);
        }
        first_elmt = arr[i];
        count = 1;
    }
}
cout << v.size() << '\n' ;
for(ll i = 0;i<v.size();i++){
    cout << v[i] << '\n';
}


return 0 ;
}
