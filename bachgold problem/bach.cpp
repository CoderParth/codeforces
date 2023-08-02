#include <bits/stdc++.h>
using namespace std;

void solve(int k) {
    if(k == 2) {
        cout << 1 << "\n";
        cout << 2 << "\n";
    } else {
        vector<int> primes={2, 3};
        int max_ways = k / 2;

        cout << max_ways << "\n";
        if(k % 2 == 0) {
            for(int i = 0; i < max_ways; ++i) {
                cout << primes[0] << " " << "\n";
            }
        } else {
            for(int i = 0; i < max_ways - 1; ++i) {
                cout << primes[0] << " ";
            }
            cout << primes[1] << "\n";
        }
    }
}

int main() {
    int k;
    cin >> k;
    solve(k);
    return 0;
}