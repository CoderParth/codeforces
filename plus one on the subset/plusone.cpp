#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int min = INT_MAX;
        int max = INT_MIN;

        while(n--) {
            int a;
            cin >> a;

            if(a < min) {
                min = a;
            }

            if(a > max) {
                max = a; 
            }

        }

        cout << max - min << "\n";
    }
    return 0;
}