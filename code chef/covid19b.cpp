//# COVID19B
// LOGIC : Hardcoded while N taken as 3 ;


#include <iostream>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while ( t--){
        int n ;
        cin >> n;
        n = 3 ;
        int v[3];
        cin >> v[0] >> v[1] >> v[2] ;
        if (v[0] > v[1] and v[0] > v[2]){
            if (v[1] > v[2]){
                cout << 3 << " " << 3 <<'\n' ;
            } else{
                cout << 2 << " " << 3 << '\n' ;

            }
        }
        if (v[0] < v[1] and v[0] < v[2]) {
            if (v[1] == v[2]) {
                cout << 1 << " " << 1 << '\n';
            }
        }
        if (v[1] < v[0] and v[1] < v[2]){
            if (v[0] == v[2]){
                cout << 1 << " " << 2 << '\n';
            }}

        if (v[1] > v[0] and v[1] > v[2]){
            if (v[0] > v[2]){
                cout << 2 << " " << 3 << '\n' ;
            } else{
                cout << 1 << " " << 2 << '\n' ;
            }
        }
        if (v[2] > v[0] and v[2] > v[1]){
            if (v[0] > v[1]){
                cout << 1 << " " << 2 << '\n' ;
            } else{
                cout << 1 << " " << 1 << '\n' ;
            }
        }
        if (v[2] < v[1] and v[2] < v[0]){
            if (v[0] == v[1]){
                cout << 2 << " " << 3 << '\n';
            }

        }
        if (v[0] == v[1] and v[1] == v[2]){
            cout << 1 << " " << 1 << '\n';
        }


    }
    return 0;
}