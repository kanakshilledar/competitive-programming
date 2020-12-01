// problem SLAB
#include <iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0){
	    long income;
	    cin>>income;
	    int Tax=0;
	    if(income>1500000){
	       Tax = Tax+(((income-1500000)*3)/10)+187500;
	    }
	    else if(income>1250000){
	        Tax=Tax+(((income-1250000)*25)/100)+125000; // 62500
	    }
	    else if(income>1000000){
	        Tax=Tax+(((income-1000000)*20)/100)+75000; //50000
	    }
	    else if(income>750000){
	        Tax=Tax+(((income-750000)*15)/100)+37500; //37500
	    }
	    else if(income>500000){
	        Tax=Tax+((income-500000)/10)+12500; //25000
	    }
	    else if(income>250000){
	        Tax=Tax+((income-250000)/20); //12500
	    }
	    cout<<income-Tax<<endl;
	    T--;
	}
	return 0;
}