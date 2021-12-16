// code: gene01
// contest: start20c
#include <bits/stdc++.h>
using namespace std;

int main () {
    char a, b;
    cin >> a >> b;
    if (a == b) 
        cout << a;
    else if (a == 'G' && b != 'G')
        cout << b;
    else if (a == 'R' && b != 'R')
        cout << a;
    return 0;
}
