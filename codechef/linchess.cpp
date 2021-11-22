#include<iostream>

using namespace std;

int main(){
    int t, n, k, p;
    int res, tmp, min;
    scanf("%d", &t);
    while(t--){
        min = 1000000001;
        res = -1;
        scanf("%d %d", &n, &k);
        for(int i=0; i<n; i+=1){
            scanf("%d", &p);
            int MOD = k%p;
            int DIV = k/p;
            if(MOD==0&&DIV<min){
                res = p;
                min = DIV;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}