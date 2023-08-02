#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n; 
        cin >> n;

        if((n  / 2) % 2 != 0) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";

            vector<int> arr;
            int middle = n / 2;

            int f = 2, total_first = 0;
            for(int i = 0; i < middle; ++i) {
                arr.push_back(f);
                total_first += f;
                f += 2;        
            }

            int s = 1, total_second = 0;
            for(int j = middle; j < n; ++j) {
                if(j == n-1) {
                    arr.push_back(total_first - total_second);
                } else {
                    arr.push_back(s);
                    total_second += s;
                    s += 2;   
                }
            }

            for(int k : arr) {
                cout << k << " ";
            }

            cout << "\n";
        }
    }
    return 0;
}