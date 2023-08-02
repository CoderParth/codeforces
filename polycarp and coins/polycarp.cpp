#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int c1, c2;

        c1 = n / 3;
        c2 = (n - c1) / 2; 

        int diff = abs(n - c1 - 2 * c2);
        c1 += diff;

        cout << c1 << " " << c2 << "\n";
    }
    return 0;
}

