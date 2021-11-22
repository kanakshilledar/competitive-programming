#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    int n,k;
	cin>>n>>k;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long int pairs=0;
	int i=0,j=1;
	while(j<n)
	{
		if(arr[j]-arr[i]>=k)
		{
			pairs+=(n-j);
			i++;
		}
		else		
			j++;
	}	
	cout<<pairs<<endl;
	return 0;
}