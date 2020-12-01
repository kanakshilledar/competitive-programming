#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    long long int testcase;
    cin >> testcase;
    while (testcase --) {
        long long int lengthPoem, initialPages, budget, numberNotebooks;
        cin >> lengthPoem >> initialPages >> budget >> numberNotebooks;
        long long int requiredPages{lengthPoem - initialPages};
        if (requiredPages <= 0) cout << "LuckyChef" << endl;
        else {
            bool canBuy{false};
            vector <long long int> books;
            while (numberNotebooks--) {            
                long long int pages, cost;
                cin >> pages >> cost;
                books.push_back(pages), books.push_back(cost);      
            }
            for (long long int i = 0; i < books.size(); i = i + 2) {
                if (books[i] >= requiredPages and books[i + 1] <= budget) canBuy = true;
                else canBuy = false;
            }

            if (canBuy == true) cout << "LuckyChef" << endl;
            else cout << "UnluckyChef" << endl;
        }
    }
    
    return 0;
}