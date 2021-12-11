#include <bits/stdc++.h>
using namespace std;

int main() {
    int t{};
    cin >> t;
    while (t--) {
        int x{}, y{}, p{}, q{};
        cin >> x >> y >> p >> q;
        int chef = x + (p * 10);
        int chefina = y + (q * 10);
        if (chef > chefina)
            cout << "Chefina" << "\n";
        else if (chef < chefina)
            cout << "Chef" << "\n";
        else 
            cout << "Draw" << "\n";
    }
    return 0;
}
