#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long

int main() {
    boost;
    ll numContests, numInstanceV, numInstanceW;
    cin >> numContests >> numInstanceV >> numInstanceW;
    ll contestTimings[2 * numContests];
    for (int i = 0; i < (2 * numContests); i++) {
        cin >> contestTimings[i];
    }
    ll instanceV[numInstanceV], instanceW[numInstanceW];
    for (int i = 0; i < numInstanceV; i++) {
        cin >> instanceV[i];
    }
    for (int i = 0; i < numInstanceW; i++) {
        cin >> instanceW[i];
    }
    sort(instanceV, instanceV + numInstanceV);
    sort(instanceW, instanceW + numInstanceW);

    ll tempDiff, index, smallest{INT16_MIN};
    for (int i = 0; i < (2 * numContests); i++) {
        for (int j = 0; j < numInstanceV; j++) {
            tempDiff = contestTimings[i] - instanceV[j];
            if (tempDiff >= 0 or tempDiff * (-1)and tempDiff <= smallest) {

            }
        }
    }
}