#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    while(true) {
        int p1{-1}, p2{-1}, p3{-1};
        int lo{0}, hi{1000};
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            cout << "? " << mid << " " << endl;
            fflush(stdout);
            string x;
            cin >> x;
            if (x=="YES") {
                p1 = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        int side_square = 2 * p1;
        lo = 0, hi = 1000;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            cout << "? " << mid << " " << side_square << endl;
            fflush(stdout);
            string x;
            cin >> x;
            if (x == "YES") {
                p2 = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        int triangle_base = 2 * p2;
        lo = 0, hi = 1000;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            cout << "? " << 0 << " " << mid << endl;
            fflush(stdout);
            string x;
            cin >> x;
            if (x == "YES") {
                p3 = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        int triangle_height = p3 - side_square;
        int total_area = (side_square * side_square) + ((triangle_base * triangle_height) / 2);
        cout << "! " << total_area << endl;
        fflush(stdout);
        return 0;
    }
    return 0;
}