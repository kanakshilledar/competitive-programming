// // CODE : ZCO14001
// first line of input contains the width and the maximum 
// allowed height of the structure. next we complete our 
// array names stack. in the output part we print the resulting
// array (state of the boxes).
// logic:
//     we have created a variable named pointer and a bool 
//     variable named hasBox which is originally false. 
//     next in a infinite running loop we take the commands
//     input and move the pointer. with the help of hasBox
//     we can check whether the box will get dropped or picked up.

#include <bits/stdc++.h>
using namespace std;
#define boost ios::sync_with_stdio(false); cin.tie(0)

int main() {
    boost;
    long long int width, maxHeight;
    cin >> width >> maxHeight;
    long long int stack[width];

    for (long long int i = 0; i < width; i++) {
        cin >> stack[i];
    }
    long long int pointer{0};
    bool hasBox{false};
    while (true) {
        int input;    
        cin >> input;

        if (input == 1 and pointer > 0) {
            pointer --;

        } else if (input == 2 and pointer < width - 1) {
            pointer ++;

        } else if (input == 3 and hasBox == false and stack[pointer] != 0) {
            stack[pointer] --;
            hasBox = true;
        } else if (input == 4 and hasBox == true and stack[pointer] != maxHeight) {
            stack[pointer] ++;
            hasBox = false;
        } else if (input == 0) {
            break;
        }
    }
    for (long long int i = 0; i < width; i ++) {
        cout << stack[i] << " ";
    }
    cout << endl;
    return 0;
}