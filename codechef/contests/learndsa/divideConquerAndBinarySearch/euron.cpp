#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    int n;
    cin >> n;
    int arr[n];
    bool flag;
    int count{0};
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        flag = false;
        for (int j = 0; i < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
                count++;
            }
        }
        
        if (flag == false) break;
    }
    // cout << 5 << endl;
    cout << count << endl;
    return 0;
}