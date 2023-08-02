#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max_ab =  max(a, b);
        int min_ab = min(a, b);

        int max_cd = max(c, d);
        int min_cd = min(c, d);

        if(max_ab < min_cd || max_cd < min_ab) {
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}