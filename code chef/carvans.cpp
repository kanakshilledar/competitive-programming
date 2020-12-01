#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    int t;
    cin >> t;
	while(t--){
	    int n, count{1};
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; ++i){
	        cin >> arr[i];
	    }
	    for(int i = 1; i < n; ++i){
	        if (arr[i] <= arr[i-1]) {
	            ++count;
	        }
	        else arr[i] = arr[i-1];
	        
	    }
	    cout << count << endl;
	}
	return 0;
}