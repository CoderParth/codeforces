#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        // find lowest abs diff
        vector<int> stren(n, 0);
        int lowest = INT_MAX; 
        
        for(int i = 0; i < stren.size(); ++i) {
            int a; 
            cin >> a;
            stren[i] = a;
        }

        for(int i = 0; i < stren.size(); ++i) {
            for(int j = i + 1; j < stren.size(); ++j) {
                int diff = abs(stren[i] - stren[j]);
                if( diff < lowest) {
                    lowest = diff;
                }
            }
        }

        cout << lowest << "\n";
    }
    return 0;
}