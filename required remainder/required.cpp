#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = n / x;
        long long max_k = k * x + y;

        if(max_k > n) {
            max_k -= x;
        }

        cout << max_k << "\n";
    }
    return 0;
}
