#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int sum = a + b + c + n;

        if(sum % 3 == 0 && max({a, b, c}) <= sum / 3) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}