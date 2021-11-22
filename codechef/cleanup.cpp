#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            {return -1; }
        if (arr[mid] > x) 
            {return binarySearch(arr, l, mid - 1, x);} 
        else{return binarySearch(arr, mid + 1, r, x);} 
    } 
  return 2; 
} 
int main(){
    long long int t;
    cin>>t;
    while(t--){
     long long int n,m;
     cin>>n>>m;
     int a[m];
     for(long long int i=0;i<m;i++){
         cin>>a[i];
     }
     sort(a,a+m);
     int p=2;
     vector<int> v;
     vector <int> s;
     for(long long int i=1;i<=n;i++){
         int r=2;
         r=binarySearch(a,0,m-1,i);
        //  for(long long int j=0;j<n;j++){
        //      if(i==a[j]){
        //          r=-1;
        //      }
        //  }
         if(r>0){
         if(p%2==0){
          v.push_back(i);
         p++;}
         else
         {
            s.push_back(i);
            p++;
         }
         }
     }
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
       cout<<endl;
     for(int i=0;i<s.size();i++){
         cout<<s[i]<<" ";
     }
     cout<<endl;
    }
}