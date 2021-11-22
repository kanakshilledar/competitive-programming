#include <iostream>
#include <algorithm>
using namespace std ;

int remove_duplicates(long int a[], long int temp1){
    if (temp1 == 0 || temp1 == 1)
        return  temp1 ;

    long int temp2[temp1];
    long int j = 0 ;
    for (long int i = 0; i < temp1 - 1; ++i) {
        if (a[i] != a[i+1]){
            temp2[j++] = a[i];
        }
    }
    temp2[j++] = a[temp1 - 1];

    for (long int i = 0; i < j; ++i) {
        a[i] = temp2[i];
    }
    return  j ;

}

int main(){
    long int t ;
    cin >> t ;
    while (t > 0){
        long int n ;
        cin >> n ;
        long int a[n];
        for (long int i = 0; i < n; ++i) {
            cin >> a[i] ;
        }
        sort(a,a+n);
        long int temp1 = sizeof(a)/sizeof(a[0]);
        temp1 = remove_duplicates(a, temp1);

        cout << temp1 << '\n' ;
        t-- ;

    }
    return 0 ;
}