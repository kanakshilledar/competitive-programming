#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num, even{0}, odd{0};
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > odd)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";

    return 0;
}

