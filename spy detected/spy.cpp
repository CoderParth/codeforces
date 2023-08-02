#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int current = 0, prev = 0;
        bool found = false;
        for(int i = 1; i <= n; ++i) {
            int a;
            cin >> a;

            current = a;
            if(prev == 0) {
                prev = a;
            } else if(prev != 0 && prev != a && !found) {
                if(i == 2) {
                    int b;
                    cin >> b;
                    if(current == b) {
                        cout << 1 << "\n";
                    } else {
                        cout << i << "\n";
                    }
                    n--;
                } else {
                     cout << i  << "\n";
                }
                found = true;
            } 
        }
    }
    


    return 0;
}