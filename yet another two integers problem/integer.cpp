#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a,b;
        cin >> a >> b;
        
        int diff = abs(a - b );
        int count;

        if(diff % 10 == 0) {
            count = diff / 10;
        } else {
            count = diff / 10 + 1;
        }

        cout << count << "\n";
    }
    return 0;
}