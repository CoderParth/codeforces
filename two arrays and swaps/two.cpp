#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n, 0);
        vector<int> b(n,0);

        for(int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }

        for(int i = 0; i < n; ++i) {
            cin >> b[i]; 
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        for(int i = 0; i < k; ++i) {
            if(a[i] < b[i]) {
                swap(a[i], b[i]);
            }   
        }
        
        int total = 0;
        for(int i = 0; i < a.size(); ++i) {
            total += a[i];
        }

        cout << total << "\n";
       
    }
    return 0;
}