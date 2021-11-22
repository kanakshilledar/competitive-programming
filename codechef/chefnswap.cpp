#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase > 0) {
        int n ;
        cin >> n;
        int s[n];
        for (int i = 0; i <= n; i++) {
            s[i] = i + 1;
        }
        int sum = 0;
        for (int i = 0; i < n; i ++) {
        	sum = sum + s[i];
        }
        int swaps = 0;
        if (sum % 2 == 0) {
        	int m;
        	if (n % 2 == 0) {
        		m = (sum / n) + 2;
        	} else {
        		m = sum / n;
        	}
        	int m_pos = 0;
        	for (int i = 0; i < n; i ++) {
        		if (s[i] == m) {
        			m_pos = i;
        		}
        	}
        	int left_sum = 0, right_sum = 0;
        	for (int i = 0; i <= m_pos; i ++) {
        		left_sum = left_sum + s[i];
        	}
        	for (int i = m_pos + 1; i < n; i ++) {
        		right_sum = right_sum + s[i];
        	}
        	// cout << left_sum << '\t' << right_sum << endl;
        	int difference;
        	if (right_sum > left_sum) {
        		difference = (right_sum - left_sum) / 2;
        	} else {
        		difference = (left_sum - right_sum) / 2;
        	}
        	
        	// cout << difference << endl;
        	// cout << m_pos << endl;
        	for (int i = m_pos; i < n; i ++) {
        		for (int j = 0; j <= m_pos; j ++) {
        			if (i - j == difference) {
        				swaps ++ ;
        			}
        		}

        	}
        	cout << swaps << endl;

        } else {
        	cout << swaps << endl;
        }

        testcase --;
    }
    return 0;
}