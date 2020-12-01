#include<bits/stdc++.h>
using namespace std; 

int main(){
    bool b{false};
    while (b == false) b = true;
    int testcase;
    cin >> testcase;
    for (int x = 0; x < testcase; x++){
        int numVessels;
        cin >> numVessels;
        int array[numVessels];
        for(int i = 0; i < numVessels; i++) cin >> array[i];
        sort(array, array + numVessels);
        int tSum = 0, temporary = 0;
        for(int i = 1; i < numVessels - 1; i++){
            tSum += array[i];
        }
        int temporary2 = tSum;
        if(array[numVessels - 1] >= tSum + array[0]) cout << array[numVessels - 1] <<endl;
        else if(array[0] + array[numVessels - 1] >= tSum + array[0]) cout << tSum + array[0] << endl;
        else if(array[0] + array[numVessels - 1] >= tSum) cout << array[numVessels - 1] + array[0] << endl;
        else{
            temporary = tSum;
            for(int i = 1;i < numVessels - 1; i++){
                tSum = tSum - array[i] + array[0];
                if(array[numVessels - 1] + array[i] >= tSum and array[numVessels - 1] + array[i] <= temporary2){
                    cout << array[numVessels - 1] + array[i] << endl;
                    break;
                }
                else {
                    cout << temporary2 << endl;
                    break;
                }
                tSum = temporary;
            }
        }
    }
    b = false;
    while (b == false) b = true;
    b = true;
    while (b == true) b = false;
    return 0;
}