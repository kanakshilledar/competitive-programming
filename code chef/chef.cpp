#include <iostream>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while (testcase --) {
        int n ;
        cin >> n;
        int s[n];
        int swaps{0};
        for (int i = 0; i < n; i++) {
            s[i] = i + 1;
        }
        int sum{0} ;
        for (int i = 0; i < n; ++i) {
            sum = sum + s[i] ;
        }
        if (sum%2 != 0){
            cout << 0 << '\n';
        } else{
            int m{1};
            int final_answer{0};
            while (m < n){
                int m_position ;
                for (int i = 0; i < n; ++i) {
                    if (s[i] == m){
                        m_position = i ;
                    }
                }
                int left_sum{0} ;
                int right_sum{0} ;
                int diffrence ;
                for (int i = 0; i <= m_position; ++i) {
                    left_sum = left_sum + s[i] ;
                }
                for (int i = m_position + 1; i < n; ++i) {
                    right_sum = right_sum + s[i];
                }
                if (right_sum > left_sum){
                    diffrence = (right_sum - left_sum)/2 ;
                } else{
                    diffrence = (left_sum - right_sum)/2 ;
                }
                left_sum = 0;
                right_sum = 0;
                for (int i = m_position ; i < n ; ++i) {
                    for (int j = 0; j <= m_position ; ++j) {
                        if (s[i] - s[j] == diffrence){
                            swap(s[i],s[j]) ;
                            for (int k = 0; k <= m_position; ++k) {
                                left_sum = left_sum + s[k] ;
                            }
                            for (int k = m_position + 1; k < n; ++k) {
                                right_sum = right_sum + s[k];
                            }
                            if (left_sum == right_sum){
                                swaps ++ ;
                            }
                            swap(s[i],s[j]) ;
                            left_sum = 0 ;
                            right_sum = 0 ;
                        }

                    }

                }
                final_answer = final_answer + swaps;
                swaps = 0 ;
                m++ ;
            }
            cout << final_answer << '\n' ;


        }

    }
    return 0;
}





