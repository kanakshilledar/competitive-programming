// CODE : 1624
// STATUS : Giving Error


#include <bits/stdc++.h>
using namespace std;

vec<2, bool> board(8, 8);
int solve(int j = 0, int x = 0, int d1 = 0, int d2 = 0)
{
    if (j == 8) return 1;
    int res = 0;
    for (int i = 0; i < 8; ++i)
    {
        if (board[i][j] && !(x&(1<<i)) && !(d1&(1<<(i+j))) && !(d2&(1<<(i-j+8))))
            res += solve(j+1, (x|(1<<i)), (d1|(1<<(i+j))), (d2|(1<<(i-j+8))));
    }
    return res;
}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for (int i = 0; i < 8; ++i)
    {
        string str; cin >> str;
        for (int j = 0; j < 8; ++j) board[i][j] = (str[j] != '*');
    }
    cout << solve() << '\n';
    return 0;
}